a=int(input())
s1=a//1000
s2=a//100%10
s3=a//10%10
s4=a%10
if(s1%2==1 or s2%2==1 or s3%2==1 or s4%2==1):
    print('YES')
else:
    print('NO')
