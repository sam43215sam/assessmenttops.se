#include <stdio.h>
#include <string.h>

class Lecture
{
    char lecturer_name[100], subject_name[100], course_name[100];
    int num_lectures;

    public:
        Lecture(char lecturer[], char subject[], char course[], int num)
        {
            strcpy(lecturer_name, lecturer);
            strcpy(subject_name, subject);
            strcpy(course_name, course);
            num_lectures = num;
        }

        void add_lecture_details()
        {
            printf("\nEnter lecturer name: ");
            scanf("%s", lecturer_name);
            printf("\nEnter subject name: ");
            scanf("%s", subject_name);
            printf("\nEnter course name: ");
            scanf("%s", course_name);
            printf("\nEnter number of lectures: ");
            scanf("%d", &num_lectures);
        }

        void display_lecture_details()
        {
            printf("\nLecturer Name: %s", lecturer_name);
            printf("\nSubject Name: %s", subject_name);
            printf("\nCourse Name: %s", course_name);
            printf("\nNumber of Lectures: %d", num_lectures);
        }
};

int main()
{
    Lecture l1("John Doe", "Mathematics", "BSc Mathematics", 10), l2("Jane Doe", "Physics", "BSc Physics", 12), l3("James Smith", "Chemistry", "BSc Chemistry", 8), l4("Jenny Smith", "Biology", "BSc Biology", 15), l5("Jack Black", "Computer Science", "BSc Computer Science", 20);

    int choice;

    do
    {
        printf("\n\nEnter your choice:\n");
        printf("1. Add a lecture detail\n");
        printf("2. Display name and lecture details\n");
        printf("3. Exit\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter the lecturer number (1-5): ");
                int num;
                scanf("%d", &num);

                switch(num)
                {
                    case 1:
                        l1.add_lecture_details();
                        break;

                    case 2:
                        l2.add_lecture_details();
                        break;

                    case 3:
                        l3.add_lecture_details();
                        break;

                    case 4:
                        l4.add_lecture_details();
                        break;

                    case 5:
                        l5.add_lecture_details();
                        break;

                    default:
                        printf("\nInvalid choice.");
                }
                break;

            case 2:
                printf("\nEnter the lecturer number (1-5): ");
                scanf("%d", &num);

                switch(num)
                {
                    case 1:
                        l1.display_lecture_details();
                        break;

                    case 2:
                        l2.display_lecture_details();
                        break;

                    case 3:
                        l3.display_lecture_details();
                        break;

                    case 4:
                        l4.display_lecture_details();
                        break;

                    case 5:
                        l5.display_lecture_details();
                        break;

                    default:
                        printf("\nInvalid choice.");
                }
                break;

            case 3:
                return 0;
            
            default:
                printf("\nInvalid choice.");
        }

    } while(choice != 3);

    return 0;
}

