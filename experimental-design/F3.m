function [ results1,means1,results2,means2] = F3( A )
%2.3����Ҫ�ĺ���
%                                                   Designed by Yizhou Wang
%                                                       Sichuana University
%                                                            31.03.2017
%bonferroni  tukey�����ؼ���
[p,~,stats] = anova1(A);
%bonferronifa��
[results1,means1] = multcompare(stats,'CType','bonferroni');
%tukey��
[results2,means2] = multcompare(stats, 'CType','hsd');
p=p;
end

