package classExtractRefactor;

public class Circle extends Shape {
	private double radius;
	Circle(double radius){
		this.radius = radius;
	}
	
	public double area() {
		return 3.14 * (this.radius * this.radius);	
	}

}
