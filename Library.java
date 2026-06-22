

interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class ChildUser implements LibraryUser {
    private int age;
    private String bookType;

    public ChildUser(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultMember implements LibraryUser {
    private int age;
    private String bookType;

    public AdultMember(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only adult fiction books");
        }
    }
}

public class Library {
    public static void main(String[] args) {

        ChildUser child1 = new ChildUser(10, "Kids");
        child1.registerAccount();
        child1.requestBook();

        ChildUser child2 = new ChildUser(15, "Kids");
        child2.registerAccount();
        child2.requestBook();

        AdultMember adult1 = new AdultMember(25, "Fiction");
        adult1.registerAccount();
        adult1.requestBook();

        AdultMember adult2 = new AdultMember(20, "Non-Fiction");
        adult2.registerAccount();
        adult2.requestBook();
    }
}