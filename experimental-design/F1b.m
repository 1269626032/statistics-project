function [ T ] = F1b(A)
%�����ط��������
%2.1��2������Ҫ�ĺ���
%                                                   Designed by Yizhou Wang
%                                                       Sichuana University
%                                                            31.03.2017
[m,n]=size(A);
ziyoudu=[n-1;m*n-n;m*n-1];
a=1/m*sum(A);
b=1/n*sum(A,2);
c=1/n*sum(a);
SSa=0;SSe=0;SSt=0;
for i=1:n
    SSa=SSa+m*(a(1,i)-c)^2;
    for j=1:m
        SSe=SSe+(A(j,i)-a(1,i))^2;
        SSt=SSt+(A(j,i)-c)^2;
    end
end
pingfanghe=[SSa;SSe;SSt];
MSA=SSa/(n-1);
MSE=SSe/(m*n-n);
junfang=[MSA;MSE;0];
F=[MSA/MSE;0;0];
LastName={'����';'���';'�ܺ�'};
 T=table(ziyoudu,pingfanghe,junfang,F,...
    'RowNames',LastName);

end

