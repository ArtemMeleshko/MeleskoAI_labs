

public interface aim
{
    void Loss();
    void Gain();
    void Maintenance();

}

class Natural implements  aim
{

    public void Loss()
    {
        System.out.println("Овощные салаты 150г и овощи");
        System.out.println("Отварная курица 80г или рыба 200г");
        System.out.println("Отварной картофель 150г");
        System.out.println("йогурта (1,5% жирности)");



    }
    public void Gain()
    {
        System.out.println("Мучные и молочные изделия");
        System.out.println("Любые гарниры и мясо");
        System.out.println("Овощные салаты");

    }
    public void Maintenance()
    {

        System.out.println("Овсянные каши");
        System.out.println("Различные мясные продукты, рыба");
        System.out.println("Бокал Вина");
        System.out.println("Молочные продукты");

    }

}

class Usingchemistry extends Natural implements  aim
{
    public void Loss()
    {
        super.Loss();
        System.out.println("химия");
        System.out.println("Протеиновая смесь");
        System.out.println("Клеточный активатор");
        System.out.println("Растительный напиток");
    }
    public void Gain()
    {
        super.Gain();
        System.out.println("химия");
        System.out.println("Протеиновые батончики");
        System.out.println("Протеиновая смесь");
        System.out.println("Метеонин + Экдистерон");
    }
    public void Maintenance()
    {
        super.Maintenance();

        System.out.println("Что бы поддерживать вес, химия не нужна");
    }
}




