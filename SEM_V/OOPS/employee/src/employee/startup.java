package employee;

public class startup {

	public static void main(String[] args) {
		
		Employee robert = new Employee("Rober", "2003", "Sanquelim", 10000);
		Employee sam = new Employee("Sam", "2005", "Bichoim", 80000);
		Employee ajay = new Employee("Ajay", "2003", "Sanquelim", 10000);
		Employee atul = new Employee("Atul", "2003", "Valpoi", 10000);
		
		System.out.println("name\tjoining\tsalary\tAddress");
		robert.display();
		sam.display();
		ajay.display();
		atul.display();

	}

}
