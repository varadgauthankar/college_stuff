class StudentMarks {
  constructor(rollNo, subject, marks) {
    this.rollNo = rollNo;
    this.subject = subject;
    this.marks = marks;
  }

  display() {
    console.log(
      `ROLL NO: ${this.rollNo}\nSUBJECT: ${this.subject}\nMARKS: ${this.marks}`
    );
  }

  getGrade() {
    if (this.marks >= 80) return "A";
    else if (this.marks >= 70 && this.marks < 80) return "B";
    else if (this.marks >= 60 && this.marks < 70) return "C";
    else if (this.marks >= 50 && this.marks < 60) return "D";
    else if (this.marks >= 40 && this.marks < 40) return "E";
    else if (this.marks <= 40) return "F";
    else return "";
  }
}

const student = new StudentMarks(16, "MATHS", 33);

student.display();

console.log(student.getGrade());
