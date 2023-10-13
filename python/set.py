a={5,20,1,20,15,7,3,7}
b={}
c={9,8,7,6,5,4}
print("a=",a)
print(type(a))
a.add(9)
print("a=",a)
print("length=",len(a))
print("max=",max(a))
print("min=",min(a))
print("sum=",sum(a))
print("sort=",sorted(a))
enum1=enumerate(a)
print(enum1)
print(list(enum1))
print(any(b))
print(all(a))
a.remove(7)
print("a=",a)
a.discard(20)
print("a=",a)
a.pop()
print("a=",a)
set=a.union(c)
print("set=",set)
set=a.update(c)
print(a)






