package shapes;

public class Cube extends Shape {
	int a;
	Cube(int a){
		this.a = a;
	}
	
	public void surface() {
		 double res =  6 * (a * a);
		 System.out.print("\nSURFACE OF CUBE: " + res);
	}
	
	public void volume() {
		double res = a * a * a;
		System.out.print("\nVOLUME OF CUBE: " + res);
	}
}
