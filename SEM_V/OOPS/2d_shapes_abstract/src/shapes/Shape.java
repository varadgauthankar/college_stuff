package shapes;

public abstract class Shape {
	int d1;
	
	Shape(int val){
		this.d1 = val;
	}
	
	public abstract void area();
}
