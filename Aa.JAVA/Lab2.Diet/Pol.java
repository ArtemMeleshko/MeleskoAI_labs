
public  interface  Pol
{
    double Calories();
    public void Norma(double goal , double typelife);

}

class Woman implements Pol
{
    double weight, height;
    int age;
    Woman ( double weight, double height, int age)
    {
        this.weight=weight;
        this.height=height;
        this.age=age;

    }
    public double Calories()
    {
        return 477.6+(9.2*weight)+(3.1*height)-(4.3*age);
    }



    public void Norma(double typelife, double goal)
    {
        System.out.println("Суточная норма каллорий " + Math.rint(this.Calories()*typelife)* goal);
        System.out.println("Белков " + Math.rint(((((this.Calories()*typelife)* goal)*0.4)/4)));
        System.out.println("Жиров " + Math.rint(((((this.Calories()*typelife)* goal)*0.2)/9)));
        System.out.println("Углеводов " + Math.rint(((((this.Calories()*typelife)* goal)*0.4)/4)));
    }
}



class Man implements Pol
{
    double weight, height;
    int age;
    Man ( double weight, double height, int age)
    {
        this.weight=weight;
        this.height=height;
        this.age=age;
    }
    public double Calories()
    {
        return 88.36+(13.4*weight)+(4.8*height)-(5.7*age);
    }
    public void Norma(double typelife, double goal)
    {
        System.out.println("Суточная норма каллорий " + Math.rint(this.Calories()*typelife)* goal);
        System.out.println("Белков " + Math.rint(((((this.Calories()*typelife)* goal)*0.4)/4)));
        System.out.println("Жиров " + Math.rint(((((this.Calories()*typelife)* goal)*0.2)/9)));
        System.out.println("Углеводов " + Math.rint(((((this.Calories()*typelife)* goal)*0.4)/4)));
    }
}
