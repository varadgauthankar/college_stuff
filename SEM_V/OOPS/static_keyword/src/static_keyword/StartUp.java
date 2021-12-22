package static_keyword;

public class StartUp {

	public static void main(String[] args) {
	
		User user = new User("Varad");
		User.getCount();
		
		User user1 = new User("Varad");
		User.getCount();
		
		User user2 = new User("Varad");
		User.getCount();
	
	
	}
}
