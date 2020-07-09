function [ F ] = F4b( A )
%���ЧӦ���Կɼ�ģ��
%2.4�ڶ�������Ҫ�ĺ���
%                                                   Designed by Yizhou Wang
%                                                       Sichuana University
%                                                            31.03.2017[m,n]=size(A);
b=1/n*sum(A,2);
c=1/m*sum(b);
SSE=0;SSA=0;
for i=1:m
    for j=1:n
        SSE=SSE+(A(i,j)-b(i,1))^2;
        SSA=SSA+(b(i,1)-c)^2;
    end
end
F=(SSE*(m-1))/(SSA*(m*n-m));

end
