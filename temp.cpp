	drawSierpinski(upper, upper.midpoint(right), upper.midpoint(left), upper.midpoint(rear), depth + 1);
	// right
	drawSierpinski(right.midpoint(upper), right, right.midpoint(left), right.midpoint(rear), depth + 1);
	// left
	drawSierpinski(left.midpoint(upper), left.midpoint(right), left, left.midpoint(rear), depth + 1);
	// rear
	drawSierpinski(rear.midpoint(upper), rear.midpoint(right), rear.midpoint(left), rear, depth + 1);
	return;
}


void drawSierpinski (Point3d upper, Point3d right, Point3d left, Point3d rear, int depth)