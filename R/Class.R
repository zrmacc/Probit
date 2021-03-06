#' Regression Model
#'
#' Defines the object class returned by fitting functions.
#'
#' @slot Model Type of fit.
#' @slot Df Degrees of freedom, if using the robit model. 
#' @slot Coefficients Regression coefficients.
#' @slot Eta Linear predictors. 
#' @slot Information Information.
#' @slot Residuals Phenotypic residuals.
#' @name fit-class
#' @rdname fit-class
#' @exportClass fit

setClass(Class="fit",representation=representation(Model="character",Df="list",Coefficients="data.frame",
                                                   Eta="vector",Information="matrix",Residuals="vector"));

########################
# Print Method
########################

#' Print for Regression Models
#' 
#' Print method for objects of class \code{fit}. 
#'
#' @param x A \code{fit} object.
#' @param ... Unused.
#' @export

print.fit = function(x,...){
  # Function to round data.frames
  aux = function(v){
    if(is.numeric(v)){return(signif(v,digits=3))}
    else{return(v)};
  };
  # Coefficients
  B = x@Coefficients;
  B[] = lapply(B,aux);
  
  cat(paste0("Fitted ",x@Model," Model"));
  if(x@Model=="robit"){
    cat(paste0(" with ",x@Df$df," degrees of freedom\n"))
  } else {
    cat("\n");
  }
  cat("Estimated Coefficients:\n");
  print(B);
  cat("\n");
}

########################
# Show Method
########################

#' Show for Regression Models
#' @param object A \code{fit} object.
#' @rdname fit-method
#' @importFrom methods show

setMethod(f="show",signature=c(object="fit"),definition=function(object){print.fit(x=object)});

########################
# Coef Method
########################

#' Extract Coefficients from a Fitted Regression Model
#' 
#' Returns the estimated regression coefficients from an object of class \code{fit}.
#'
#' @param object A \code{fit} object.
#' @param ... Unused.
#' @export

coef.fit = function(object,...){
  # Extract coefficients
  b = object@Coefficients$Point;
  names(b) = object@Coefficients$Coeff;
  return(b);
}

########################
# Predict Method
########################

#' Prediction from a Fitted Regression Model
#' 
#' Returns the estimated residuals from an object of class \code{fit}.
#'
#' @param object A \code{fit} object.
#' @param ... Unused.
#' @param X Numeric model matrix. If om
#' @param type Either response or eta, the linear predictor. 
#' @export
#' @return A numeric vector of predictions. 

predict.fit = function(object,...,X=NULL,type="eta"){
  # Linear predictor
  if(!is.null(X)){
    h = MMP(X,object@Coefficients$Point);
  } else {
    h = object@Eta;
  }
  # Transform
  if(type=="eta"){
    Out = h;
  } else if (type=="response"){
    Out = act.BinReg(h=h,model=object@Model,df=object@Df$df);
  }
  # Output
  return(Out);
}


########################
# Resid Method
########################

#' Extract Residuals from a Fitted Regression Model
#' 
#' Returns the estimated residuals from an object of class \code{fit}.
#'
#' @param object A \code{fit} object.
#' @param ... Unused.
#' @param type Either raw or pearson.
#' @export
#' @return A numeric vector of residuals. 

residuals.fit = function(object,...,type="raw"){
  # Raw residuals
  raw = object@Residuals;
  # Transform
  if(type=="raw"){
    Out = raw;
  } else {
    m = predict.fit(object=object,type="response");
    Out = raw/sqrt(m*(1-m));
  }
  # Output
  return(Out);
}

########################
# Vcov Method
########################

#' Extract Covariance Matrix from a Fitted Regression Model
#'
#' Returns the (inverse) Fisher information of the regression
#' coefficient \eqn{\hat{\beta}}. 
#' 
#' @param object A \code{fit} object.
#' @param ... Unused.
#' @param inv Invert information matrix?
#' @export
#' @return A numeric matrix. 

vcov.fit = function(object,...,inv=F){
  J = object@Information;
  if(inv){
    J = matInv(J);
  }
  return(J);
};
