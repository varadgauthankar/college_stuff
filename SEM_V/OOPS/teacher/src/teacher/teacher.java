package teacher;

public class teacher {
	String name;
	String address;
	String phoneNumber;
	int salary;
	
	public teacher(String name, String address, String phoneNumber, int salary) {
		this.name = name;
		this.address = address;
		this.phoneNumber = phoneNumber;
		this.salary = salary;
	}
	
	
	public void display() {
		System.out.println("Name: " + name);
		System.out.println("address: " + address);
		System.out.println("phoneNumber: " + phoneNumber);
		System.out.println("salary: " + salary);
	}
}
