package teacher;

public class student {
	String name;
	String address;
	String phoneNumber;
	String rollNumber;
	
	public student(String name, String address, String phoneNumber, String rollNumber) {
		this.name = name;
		this.address = address;
		this.phoneNumber = phoneNumber;
		this.rollNumber = rollNumber;
	}
	
	
	public void display() {
		System.out.println("Name: " + name);
		System.out.println("address: " + address);
		System.out.println("phoneNumber: " + phoneNumber);
		System.out.println("rollNumber: " + rollNumber);
	}
	
}