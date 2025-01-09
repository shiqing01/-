class Knowledge:
    def __init__(self):
        self.coding = ["init是构造函数，创建class实例时，自动调用；self可以看成class实例"]
        self.english = ["impart是传授的意思"]
class Student:
    def __init__(self, name, what_to_learn):
        self.name = name
        self.what_to_learn = what_to_learn

class Teacher:
    def __init__(self, name, experience, student):
        self.name = name
        self.experience = experience
        self.student = student
        self.knowledge = Knowledge()
    def impart(self):
        if self.experience == "senior":
            if self.student.learnwhat == "coding":
                print(self.knowledge.coding)
            else:
                print(self.knowledge.englisht)

        elif self.student.what_to_learn == "coding":
            print(self.knowledge.coding)
        else:
            print("sorry, 我不会english")

stu1= Student("小冯", "coding")
teacher1 = Teacher("晴姐", "young", stu1)
teacher1.impart()