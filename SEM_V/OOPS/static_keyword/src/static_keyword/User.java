package static_keyword;

public class User {
	
	private String name;
	static int count = 0;
	
	User(String name){
		this.name = name;
		count++;
	}
	
	String getName() {
		System.out.println("NAME: " + name);
		return name;
	}
	
	static void getCount() {
		System.out.println(count);
	}
	
}
