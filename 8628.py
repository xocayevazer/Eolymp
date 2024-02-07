a=int(input())
a=abs(a)
s1=a//1000
s2=a//100%10
s3=a//10%10
s4=a%10
if(s1%2==0 and s2%2==0 and s3%2==0 and s4%2==0):
    print('YES')
else:
    print('NO')
