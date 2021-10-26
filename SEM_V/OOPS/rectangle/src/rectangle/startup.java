package rectangle;

public class startup {

	public static void main(String[] args) {
		
		Rectangle rec = new Rectangle();
		
		rec.setDim();
		
		System.out.println("Area: " + rec.getArea()); 
		System.out.println("Perimiter: " + rec.getPerimeter()); 
	
	}

}
