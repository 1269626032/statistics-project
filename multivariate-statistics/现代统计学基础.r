require(xlsx)
require(ggplot2)
require(glmnet)

file=file.choose()#��ȡ����
heart=read.xlsx(file,1)

#��������ģ��
model1=glm(sbp~tobacco+ldl+adiposity+famhist+typea+obesity+alcohol+age+chd,
data=heart,
method="glm.fit")
summary(model1)

#һ������ģ��
model2=lm(sbp~tobacco+ldl+adiposity+famhist+typea+obesity+alcohol+age+chd,
data=heart)
summary(model2)
model3=step(model2,direction=c("both","backward","forward"))
summary(model3)
model4=drop1(model3)

#LASSO
x=data.matrix(heart[2:10])
y=data.matrix(heart[1])
glmnet.fit<-with(heart,glmnet(x,y))

lambdas <- glmnet.fit$lambda

performance <- data.frame()

for (lambda in lambdas)
{ 
    model<-glmnet(x,y,lambda=lambda);
    performance <- rbind(performance,
AIC<-AIC(model))# ���ò��������ڲ�ͬlambda��ͬ������½��м���AIC
}

ggplot(performance, aes(x = Lambda, y = AIC)) +
    geom_point() +
    geom_line()

best.lambda <- with(performance, Lambda[which(AIC == min(AIC2))])

glmnet.fit <- with(heart, glmnet(x,y))


coef(glmnet.fit, s = best.lambda)




#AIC����
AIC<-function(object,...,k=2){
if(method=c("lm","glm"))
  UseMethod("AIC")
if(method=c("glmnet","cv.glmnet")
  -2*LogLik+2*k}
-LogLik<-function(model){
estimate=coef(model)
estimate<-as.matrix(estimate)
for(i in 1:n)
LogLik=0;
LogLik=Loglik+y[i]*(estimate[0]+t(estimate)%*%t(x[i,]))-
log(1+exp(estimate[0]+t(estimate)%*%t(x[i,])));
return(LogLik)
}















