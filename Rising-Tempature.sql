select w1.id from Weather w1 where temperature > (select temperature from Weather w2 
where datediff(w1.recordDate,w2.recordDate)=1);
