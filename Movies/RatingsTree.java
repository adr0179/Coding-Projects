import java.util.LinkedList;

/**
 * The RatingsTree class represents a binary search tree of movies based on their ratings.
 */
public class RatingsTree {
    public MovieNode root; // The root node of the rating tree.

    /**
     * Constructs a RatingsTree object with the root set to null.
     */
    public RatingsTree() {
        root = null;
    }

    /**
     * Inserts a new movie into the rating tree.
     *
     * @param name   the name of the movie
     * @param rating the rating of the movie
     * @param genre  the genre of the movie
     */
    public void insert(String name, int rating, String genre) {
        root = insertRecursive(root, new MovieNode(new Movie(name, rating, genre)));
    }
    /**
     * Recursively inserts a movie node into the rating tree.
     *
     * @param root the root node of the subtree
     * @param node the movie node to be inserted
     * @return the root node of the modified subtree
     */
    private MovieNode insertRecursive(MovieNode root, MovieNode node) {
		// TODO - implement the recursive function to insert a MovieNode into the 
		// appropriate position in the tree (PART 1)
        if (root == null) {
            root = new MovieNode(node.getValue());
            return root;
        }

        if (node.getKey() < root.getKey()) {
            root.setLeft(insertRecursive(root.getLeft(), node));
        } else {
            root.setRight(insertRecursive(root.getRight(), node));
        }
        return root;
	}

    
    /**
     * Prints all movies in the rating tree in ascending order of their ratings.
     */
    public void printAll() {
        printAll(root);
    }

    /**
     * Recursively prints all movies in the rating tree in ascending order of their ratings.
     *
     * @param root the root node of the subtree to be printed
     */
    private void printAll(MovieNode root) {
		// TODO - implement the recursive method to print the tree in order (PART 1)
        if (root == null) {
            return;
        } 

        printAll(root.getLeft());
        System.out.println(root.getValue().toString());
        printAll(root.getRight());
	}

    /**
     * Finds and prints all movies with a rating equal to or higher than the specified rating.
     *
     * @param rating the minimum rating
     */
    public void findMoviesAtLeast(int rating) {
        LinkedList<Movie> highRatings = new LinkedList<Movie>(findRatingHigher(root, rating));
        highRatings.sort((b, a) -> a.getRating() - b.getRating());
        System.out.println("All movies with a rating of " + rating + " or higher:");
        for (Movie movie : highRatings) {
            System.out.println("\t" + movie);
        }
    }

    /**
     * Recursively finds movies with a rating equal to or higher than the specified rating.
     *
     * @param root     the root node of the subtree to be searched
     * @param minRating the minimum rating
     * @return a list of movies with ratings equal to or higher than the specified rating
     */
    private LinkedList<Movie> findRatingHigher(MovieNode root, int minRating) {
		// TODO - implement a recursive method to find all movies with at least the minRating
        LinkedList<Movie> ratings = new LinkedList<>();
        if (root == null) {
            return ratings;
        } 

        if (root.getValue().getRating() >= minRating) {
            ratings.add(root.getValue());
            ratings.addAll(findRatingHigher(root.getLeft(), minRating));
            ratings.addAll(findRatingHigher(root.getRight(), minRating));
        } else {
            ratings.addAll(findRatingHigher(root.getRight(), minRating));
        }

        return ratings;
	}
	
	 /**
     * Finds and prints all movies with a rating equal to or lower than the specified rating.
     *
     * @param rating the maximum rating
     */
	public void findMoviesLower(int rating) {
        LinkedList<Movie> lowRatings = new LinkedList<Movie>(findRatingLower(root, rating));
        lowRatings.sort((b, a) -> a.getRating() - b.getRating());
        System.out.println("All movies with a rating of " + rating + " or lower:");
        for (Movie movie : lowRatings) {
            System.out.println("\t" + movie);
        }
    }

    /**
     * Recursively finds movies with a rating equal to or lower than the specified rating.
     *
     * @param root     the root node of the subtree to be searched
     * @param maxRating the maximum rating
     * @return a list of movies with ratings equal to or lower than the specified rating
     */
    private LinkedList<Movie> findRatingLower(MovieNode root, int maxRating) {
		// TODO - implement recursive method to find movies with at least a given rating (PART 3)
        LinkedList<Movie> ratings = new LinkedList<>();
        if (root == null) {
            return ratings;
        } 

        if (root.getValue().getRating() <= maxRating) {
            ratings.add(root.getValue());
            ratings.addAll(findRatingLower(root.getLeft(), maxRating));
            ratings.addAll(findRatingLower(root.getRight(), maxRating));
        } else {
            ratings.addAll(findRatingLower(root.getLeft(), maxRating));
        }

        return ratings;
	}

    /**
     * Finds and prints all movies of the specified genre.
     *
     * @param genre the genre to search for
     */
    public void findAllGenre(String genre) {
        LinkedList<Movie> genreMovies = new LinkedList<Movie>(findGenre(root, genre));
        System.out.println("All " + genreMovies.size() + " movies in the " + genre + " genre:");
        for (Movie movie : genreMovies) {
            System.out.println("\t" + movie);
        }
    }

    /**
     * Recursively finds movies of the specified genre.
     *
     * @param root  the root node of the subtree to be searched
     * @param genre the genre to search for
     * @return a list of movies of the specified genre
     */
    private LinkedList<Movie> findGenre(MovieNode root, String genre) {
		// TODO - implment methods to find all movies for the given genre (PART 3)
        LinkedList<Movie> genreList= new LinkedList<>();
        if(root == null){
            return genreList;
        }
        if(root.getValue().getGenre().equals(genre)){
            genreList.add(root.getValue());
            genreList.addAll(findGenre(root.getLeft(), genre));
            genreList.addAll(findGenre(root.getRight(), genre));
        } else {
            genreList.addAll(findGenre(root.getLeft(), genre));
            genreList.addAll(findGenre(root.getRight(), genre));
        }
        return genreList;
	}

}
