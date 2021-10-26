package employee;

public class Employee {
	String name;
	String date;
	String address;
	int salary;
	
	public Employee(String name, String date, String address, int salary){
		this.name = name;
		this.date = date;
		this.address = address;
		this.salary = salary;
	}
	
	public void display() {
		
		System.out.println(name + "\t" + date + "\t" + salary + "\t" + address);
	}


}
