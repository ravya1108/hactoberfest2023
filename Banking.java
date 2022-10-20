import java.util.Scanner;

class Account {

    private int accountNumber;
    private String accountType;
    private String serviceBranchIFSC;
    private float minimumBalance;
    private float availableBalance;
    private int customerID;
    private String customerName;
    private static int totalAccountCreated;

    Account() {
    }

    public int getAccNumber() {
        return accountNumber;
    }

    public int check_accountno(int id) {
        if (id == accountNumber) {
            return 1;
        }
        return 0;
    }

    public int check_customerid(int id) {
        if (id == customerID) {
            return 1;
        }
        return 0;
    }

    public void setDetails(int accnumber, String acctype, float minbal, String ifsc, String accholder, float balance,
            int customer_Id, int totalacc) {

        accountNumber = accnumber;
        accountType = acctype;
        minimumBalance = minbal;
        serviceBranchIFSC = ifsc;
        availableBalance = balance;
        customerName = accholder;
        customerID = customer_Id;
        totalAccountCreated = totalacc;
    }

    public void updateDetails(int accnumber, String acctype, float minbal, String ifsc, String accholder, float balance,
            int customer_Id) {

        if (accountNumber == accnumber) {

            accountType = acctype;
            minimumBalance = minbal;
            serviceBranchIFSC = ifsc;
            availableBalance = balance;
            customerName = accholder;
            customerID = customer_Id;
        }
    }

    public void getDetails(int accnumber) {
        if (accnumber == accountNumber) {
            System.out.println("------------------------------------------------------------------------------");
            System.out.println("\t Account Number : " + accountNumber);
            System.out.println("\t Account Type : " + accountType);
            System.out.println("\t Minimum Balance : " + minimumBalance);
            System.out.println("\t IFSC : " + serviceBranchIFSC);
            System.out.println("\t Available Balance : " + availableBalance);
            System.out.println("\t Customer Name : " + customerName);
            System.out.println("\t Customer ID : " + customerID);
            System.out.println("------------------------------------------------------------------------------");
        }
    }

    public void Deposit(int accnumber, float amount) {
        if (accnumber == accountNumber) {
            availableBalance += amount;
            System.out.println("------------------------------------------------------------------------------");
            System.out.println("\tSuccesfully Deposited! For Account Number : " + accountNumber);
            System.out.println("------------------------------------------------------------------------------");
        }
    }

    public void Withdraw(int accnumber, float amount) {

        if (accnumber == accountNumber) {
            if (availableBalance >= amount + minimumBalance) {
                availableBalance -= amount;
                System.out.println("------------------------------------------------------------------------------");
                System.out.println("\tSuccessfully Withdrawn! For Account Number : " + accountNumber);
                System.out.println("------------------------------------------------------------------------------");
            } else {
                System.out.println("------------------------------------------------------------------------------");
                System.out.println("\tNot much Balance!");
                System.out.println("------------------------------------------------------------------------------");
            }
        }

    }

    public float getBalance(int accnumber) {
        if (accnumber == accountNumber)
            return availableBalance;
        else {
            return -1;
        }
    }

    public static int totalAccount() {
        return totalAccountCreated;
    }

    public void compare(Account ac1, Account ac2) {
        float bal_1 = ac1.getBalance(ac1.accountNumber);
        float bal_2 = ac2.getBalance(ac2.accountNumber);
        if (bal_1 > bal_2) {
            ac1.getDetails(ac1.accountNumber);
        } else {
            ac2.getDetails(ac2.accountNumber);
        }
    }

}

public class Banking {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        Account[] arr;
        arr = new Account[100];

        int i = 0;
        while (true) {
            System.out.println("\t -------------------");
            System.out.println("\t|0 - setDetails()   |");
            System.out.println("\t|1 - UpdateDetails()|");
            System.out.println("\t|2 - getDetails()   |");
            System.out.println("\t|3 - Deposit()      |");
            System.out.println("\t|4 - Withdraw()     |");
            System.out.println("\t|5 - getBalance()   |");
            System.out.println("\t|6 - totalAccount() |");
            System.out.println("\t|7 - compare()      |");
            System.out.println("\t|8 - Exit()         |");
            System.out.println("\t -------------------");

            System.out.println("Enter your choice");
            int choice = input.nextInt();

            if (choice == 0) {

                System.out.println("Enter Account details for Person " + (i + 1));

                System.out.println("Enter Account Number");
                int accnumber = input.nextInt();
                input.nextLine();

                System.out.println("Enter Account Type");
                String acctype = input.nextLine();

                System.out.println("Enter Minimum Balance");
                float minbal = input.nextFloat();

                System.out.println("Enter Customer Name");
                input.nextLine();
                String accholder = input.nextLine();

                System.out.println("Enter Total Balance");
                float balance = input.nextInt();

                System.out.println("Enter IFSC Of Branch");
                input.nextLine();
                String ifsc = input.nextLine();

                System.out.println("Enter Customer-ID Number");
                int customer_Id = input.nextInt();
                input.nextLine();
                if (minbal > balance) {
                    System.out.println("Can't have balance less than minimum balance!");
                } else {

                    int flag = 0, temp = 0;

                    for (int j = 0; j < i; j++) {
                        flag = arr[j].check_accountno(accnumber);
                        if (flag == 1) {
                            break;
                        }
                    }

                    for (int j = 0; j < i; j++) {
                        temp = arr[j].check_customerid(customer_Id);
                        if (temp == 1) {
                            break;
                        }
                    }

                    if (flag == 0 && temp == 0) {
                        arr[i] = new Account();
                        arr[i].setDetails(accnumber, acctype, minbal, ifsc, accholder, balance, customer_Id, i + 1);
                        i++;
                    }

                    else if (flag == 1) {
                        System.out.println("Account number already exist!");
                    } else if (temp == 1) {
                        System.out.println("Customer of same I'd already exist!");
                    }
                }

            } else if (choice == 1) {

                System.out.println("Enter Account Number");
                int accnumber = input.nextInt();
                input.nextLine();

                System.out.println("Enter Account Type");
                String acctype = input.nextLine();

                System.out.println("Enter Minimum Balance");
                float minbal = input.nextFloat();

                System.out.println("Enter Customer Name");
                input.nextLine();
                String accholder = input.nextLine();

                System.out.println("Enter Total Balance");
                float balance = input.nextInt();

                System.out.println("Enter IFSC Of Branch");
                input.nextLine();
                String ifsc = input.nextLine();

                System.out.println("Enter Customer-ID Number");
                int customer_Id = input.nextInt();
                input.nextLine();

                for (int j = 0; j < i; j++) {
                    if (arr[j] != null)
                        arr[j].updateDetails(accnumber, acctype, minbal, ifsc, accholder, balance, customer_Id);
                }

            } else if (choice == 2) {
                System.out.println("Enter Account To Get the details of any Account");
                int accnumber = input.nextInt();
                for (int j = 0; j < i; j++) {
                    arr[j].getDetails(accnumber);
                }

            } else if (choice == 3) {
                System.out.println("Enter Account number and amount to deposit");
                int accnumber = input.nextInt();
                int amount = input.nextInt();
                for (int j = 0; j < i; j++) {
                    arr[j].Deposit(accnumber, amount);
                }

            } else if (choice == 4) {
                System.out.println("Enter Account number and amount to withdraw");
                int accnumber = input.nextInt();
                int amount = input.nextInt();
                for (int j = 0; j < i; j++) {
                    arr[j].Withdraw(accnumber, amount);
                }
            } else if (choice == 5) {
                System.out.println("Enter Account number to check Balance");
                int accnumber = input.nextInt();
                for (int j = 0; j < i; j++) {
                    float balance = arr[j].getBalance(accnumber);
                    if (balance != -1) {
                        System.out.println(
                                "------------------------------------------------------------------------------");
                        System.out.println("\tAvailable Balance : " + arr[j].getBalance(accnumber));
                        System.out.println(
                                "------------------------------------------------------------------------------");
                    }

                }
            } else if (choice == 6) {
                System.out.println("------------------------------------------------------------------------------");
                System.out.println("\tTotal number of accounts till now : " + arr[0].totalAccount());
                System.out.println("------------------------------------------------------------------------------");

            } else if (choice == 7) {
                System.out.println("Enter Account Numbers to Compare");
                int ac1 = input.nextInt();
                int ac2 = input.nextInt();
                Account acc1 = null, acc2 = null;

                for (int j = 0; j < arr.length; j++) {
                    if (arr[j] == null) {
                        continue;
                    }
                    if (ac1 == arr[j].getAccNumber()) {
                        acc1 = arr[j];
                    }
                }
                for (int j = 0; j < arr.length; j++) {
                    if (arr[j] == null) {
                        continue;
                    }
                    if (ac2 == arr[j].getAccNumber()) {
                        acc2 = arr[j];
                    }
                }

                if (acc1 != null && acc2 != null) {
                    acc1.compare(acc1, acc2);
                }
            } else if (choice == 8) {
                break;
            } else {
                System.out.println("Invalid Choice!");
            }
        }

        input.close();
    }
}
