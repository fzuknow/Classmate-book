create database iknow;
create table stu
(
stu_id varchar(20) primary key,
stu_name varchar(20) not null,
stu_sex varchar(10),
stu_address varchar(20),
stu_wechat varchar(20),
stu_email varchar(20),
stu_qq varchar(20),
stu_language varchar(50)
)
insert into stu values('0001','王军','男','福州市晋安区王庄','wangjun123','wangjun@163.com','54542258','最美好的祝福献给你')
insert into stu values('0002','方菲菲','女','福州市台江区幸福花园','flyfeifei','2562544@qq.com','2562544','希望你永远开心')
insert into stu values('0003','林伟凡','男','福州市马尾区名城国际','weifanhansome','weiweifan@163.com','44545451','在接下来的日子里希望你可以快乐')
insert into stu values('0004','陈丽','女','福州市鼓楼区东大路','chenli666','85547524@qq.com','85547524','希望你可以考上心仪的大学')
insert into stu values('0005','李磊','男','福州市晋安区香开新城','lilililei','lileilei@163.com','95658226','快快乐乐，幸福平安')
insert into stu values('0006','张飞','男','福州市仓山区仓前路','zhangfeifei','85562242@qq.com','85562242','愿你可以向小鸟一样自由得飞翔')
insert into stu values('0007','关羽','男','福州市台江区武夷绿洲','guanyudadao','qlyyd@163.com','756525522','关羽在这里祝你快快乐乐')
insert into stu values('0008','范娟','女','福州市晋安区钱隆首府','juanjuanxiliu','juanjuanisme@163.COM','588622556','百事可乐，开心每一天')
insert into stu values('0009','林美','女','福州市晋安区帝国大苑','linbeautiful','45612555@qq.com','45612555','我会想你的')
insert into stu values('0010','刘备','男','福州市仓山区麦顶','liubeiliuliuliu','liubeisg@163.com','562255112','以后经常出来约啊，祝你快乐')