package shapes;

public class Circle extends Shape{
	
	Circle(int val1){
		super.d1 = val1;
	}

	@Override
	public void area() {
		System.out.print("Area of circle: " + 3.14 * (super.d1 * this.d1));
		
	}

}
