package shapes;

public class Cylinder extends Shape {
	int radius;
	int height;
	
	Cylinder(int radius, int height){
		this.radius = radius;
		this.height = height;
	}
	
	public void surface() {
		double res  = (2 * 3.14 ) * (radius * height) + (2 * 3.14) * (radius * radius);
		System.out.print("\nSURFACE OF CYLINDER: "  + res);
		
	}
	
	public void volume() {
		 double res = 3.14 * ( radius * radius) * height;
		 System.out.print("\nVOLUME OF CYLINDER: "  + res);
	}

}
