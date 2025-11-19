public class Main {
    public static void main(String[] args) {
        RatingsTree tree = new RatingsTree();
        tree.insert("Dark Knight", 100, "Action");
        tree.insert("Sinners", 98, "Horror");
        tree.insert("Welcome to Racoon City", 0, "Horror");
        tree.insert("Paddington", 50, "Comedy");
        tree.insert("Titanic", 25, "Romance");

        tree.printAll();

        tree.findMoviesAtLeast(0);
    }
}
