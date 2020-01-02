#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<time.h>


using namespace std;
int clear_input_buffer(void)
    {
        int cha;
        while(((cha=getchar())!=EOF) && (cha != '\n'));
        return cha;
    }


string time()
    {
        time_t _tm =time(NULL );
        char t[80];
        struct tm * curtime = localtime ( &_tm );
        strftime(t,80,"%d-%m-%Y %H-%M-%S",curtime);
         return string(t);
    }
int main()
{
    char name[30],file[30],*blank=".html";
	char temp[200],ch, alt[300];


    //Name of the database and file creation
	cout<<"Enter Name Of The Database : ";
	gets(name);

	strcpy(file,name);
	strcat(file,blank);
	ofstream fout(file);
	if(!fout)
	{
		cout<<"Error In Making Of A File :";
		exit(1);
	}

	//To print the title and to start the html file
	fout<<"<html>"<<endl;
	fout<<"<blockqoute>"<<endl;
	fout<<"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />"<<endl;
    fout<<"<title>Resume in HTML</title>"<<endl;
    fout<<"<link href=\"style.css\" rel=\"stylesheet\" type=\"text/css\" />"<<endl;
    fout<<" </head>"<<endl;
    fout<<" <body>"<<endl;
	fout<<"<center>"<<endl;
	fout<<"<b><h1><u>"<<"CURRICULAM VITAE"<<"</h1></b></u>"<<endl;
	fout<<"</center>"<<endl;

	//Name,Email, Number and objective input
	fout<<"<table width=\"850\" border=\"0\" align=\"center\">"<<endl;
    fout<<"<tr>"<<endl;
    fout<<" <td><table width=\"850\" border=\"0\" class=\"bor\">"<<endl;
    fout<<" <tr>"<<endl;
    fout<<"    <td height=\"60\" colspan=\"2\"><div align=\"center\">"<<endl;

    //Input Name
    cout<<"Enter Your Name : ";
	gets(temp);
	strcpy(name,temp);
    fout<<"<strong>"<<name<<"</strong>"<<endl;
    fout<<" </div></td>"<<endl;
    fout<<"  </tr>"<<endl;
    fout<<"  <tr>"<<endl;
    fout<<"    <td width=\"48%\">"<<endl;

    //Input Email
    cout<<"Enter Your Email : ";
	gets(temp);
	strcpy(alt,temp);
    fout<<"Email ID: "<<alt<<"</td>"<<endl;

    //Input Mobile Number
    fout<<"    <td width=\"52%\"><div align=\"right\">"<<endl;
    cout<<"Enter Your Contact Number : ";
	gets(temp);
	strcpy(alt,temp);
    fout<<"Contact: "<<alt<<"</div></td>"<<endl;
    fout<<"  </tr>"<<endl;

    //Input Career objective
    fout<<"  <tr>"<<endl;
    fout<<"    <td colspan=\"2\" bgcolor=\"#CCCCCC\"><strong>CAREER OBJECTIVE</strong></td>"<<endl;
    fout<<"  </tr>"<<endl;
    fout<<"  <tr>"<<endl;
    fout<<"    <td colspan=\"2\">"<<endl;
    cout<<"Enter Your Career Objective : ";
	gets(temp);
	strcpy(alt,temp);
    fout<<alt<<"</td>"<<endl;
    fout<<"  </tr>"<<endl;

    //Education profile table format
    fout<<"  <tr>"<<endl;
    fout<<" <td colspan=\"2\" bgcolor=\"#CCCCCC\"><strong>EDUCATIONAL PROFILE</strong></td>"<<endl;
    fout<<"  </tr>"<<endl;
    fout<<"  <tr>"<<endl;
    fout<<"    <td colspan=\"2\"><table width=\"850\" border=\"1\" bordercolor=\"#000000\">"<<endl;
    fout<<"      <tr>"<<endl;
    fout<<"        <td><div align=\"center\"><strong>Course</strong></div></td>"<<endl;
    fout<<"        <td><div align=\"center\"><strong>Board/University</strong></div></td>"<<endl;
    fout<<"        <td><div align=\"center\"><strong>Educational Institutation</strong></div></td>"<<endl;
    fout<<"        <td><div align=\"center\"><strong>Year of pass</strong></div></td>"<<endl;
    fout<<"        <td><p align=\"center\"><strong>% of Marks</strong></p></td>"<<endl;
    fout<<"      </tr>"<<endl;

    //Course details


            label:
            clear_input_buffer();
            fout<<"    <tr>"<<endl;
            cout<<"Enter Your Course : ";               //Course name
            gets(temp);
            strcpy(alt,temp);
            fout<<"<td>"<<alt<<"</td>"<<endl;

            cout<<"Enter Your Board/University : ";               //Board/University
            gets(temp);
            strcpy(alt,temp);
            fout<<"<td>"<<alt<<"</td>"<<endl;

            cout<<"Enter Your Educational Institutation : ";               //Educational Institutation
            gets(temp);
            strcpy(alt,temp);
            fout<<"<td><div align=\"left\">"<<alt<<"</div></td>"<<endl;

            cout<<"Enter Your Year of pass : ";               //Year of pass
            gets(temp);
            strcpy(alt,temp);
            fout<<"<td><div align=\"center\">"<<alt<<"</div></td>"<<endl;

            cout<<"Enter Your % of Marks : ";               //% of Marks
            gets(temp);
            strcpy(alt,temp);
            fout<<"<td><div align=\"center\">"<<alt<<"</div></td>"<<endl;
            fout<<"</tr>"<<endl;

            cout<<"If you Want To Add More Information Press * Sign Or press any other key to continue:";
            cin>>ch;

            if(ch=='*')
                goto label;
    fout<<"    </table></td>"<<endl;
    fout<<"  </tr>"<<endl;

    //Techical Skills
    fout<<"  <tr>"<<endl;
    fout<<"    <td colspan=\"2\" bgcolor=\"#CCCCCC\"><strong>TECHNICAL SKILLS</strong></td>"<<endl;
    fout<<"  </tr>"<<endl;

    //Input Operating System
    fout<<"  <tr>"<<endl;
    fout<<"    <td colspan=\"2\"><table width=\"831\" border=\"0\" align=\"center\">"<<endl;
    fout<<"      <tr>"<<endl;
    fout<<"        <ul>"<<endl;
    fout<<"        <td width=\"264\"><li>Operating System</li></td>"<<endl;
    fout<<"        <td width=\"37\"><strong>:</strong></td>"<<endl;
    clear_input_buffer();

    cout<<"Enter the Operating System you can use : ";               //perating System
            gets(temp);
            strcpy(alt,temp);
    fout<<"        <td width=\"532\">"<<alt<<" </td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;

    //Input Programming Languages
    fout<<" <tr>"<<endl;
    fout<<"      <ul>"<<endl;
    fout<<"        <td><li>Programming Languages</li></td>"<<endl;
    fout<<"        <td><strong>:</strong></td>"<<endl;

    cout<<"Enter the Programming Languages you can use : ";               //Programming Languages
            gets(temp);
            strcpy(alt,temp);
    fout<<"        <td>"<<alt<<"</td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;

    //Input Database
    fout<<"<tr>"<<endl;
    fout<<"      <ul>"<<endl;
    fout<<"        <td><li>Database</li></td>"<<endl;
    fout<<"        <td><strong>:</strong></td>"<<endl;

    cout<<"Enter the Database you have used : ";               //Database
            gets(temp);
            strcpy(alt,temp);
    fout<<"        <td>"<<alt<<"</td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;

    //Input IDE
    fout<<"<tr>"<<endl;
    fout<<"      <ul>"<<endl;
    fout<<"        <td><li>IDE</li></td>"<<endl;
    fout<<"        <td><strong>:</strong></td>"<<endl;

    cout<<"Enter the IDE you have used : ";               //IDE
            gets(temp);
            strcpy(alt,temp);
    fout<<"        <td>"<<alt<<"</td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;

    //Input Video Editing
    fout<<" <tr>"<<endl;
    fout<<"      <ul>"<<endl;
    fout<<"        <td><li>Video Editing</li></td>"<<endl;
    fout<<"        <td><strong>:</strong></td>"<<endl;

    cout<<"Enter the Video Editing softwares you have used : ";               //Video Editing
            gets(temp);
            strcpy(alt,temp);
    fout<<"        <td>"<<alt<<"</td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;

    //Input Picture Editing
    fout<<"<tr>"<<endl;
    fout<<"        <ul>"<<endl;
    fout<<"          <td><li>Picture Editing</li></td>"<<endl;
    fout<<"          <td><strong>:</strong></td>"<<endl;

    cout<<"Enter the Picture Editing softwares you have used : ";               //Picture Editing
            gets(temp);
            strcpy(alt,temp);
    fout<<"          <td>"<<alt<<"</td>"<<endl;
    fout<<"          </ul>"<<endl;
    fout<<"        </tr>"<<endl;
    fout<<" </table></td>"<<endl;
    fout<<"  </tr>"<<endl;

    //Project Experience
    fout<<"  <tr>"<<endl;
    fout<<"    <td colspan=\"2\" bgcolor=\"#CCCCCC\"><strong>PROJECT EXPERIENCE</strong></td>"<<endl;
    fout<<"  </tr>"<<endl;
    fout<<" <tr>"<<endl;
    fout<<"    <td height=\"17\" colspan=\"2\" bgcolor=\"#FFFFFF\"><table width=\"829\" border=\"0\" "<<endl;
    fout<<"     align=\"center\">"<<endl;

    //Input Project Experience
    label2:
        clear_input_buffer();
        fout<<" <tr>"<<endl;
        fout<<"        <ul>"<<endl;
        fout<<"          <td width=\"831\"><li>"<<endl;

        cout<<"Enter the Project Experience you have used : ";               //Project Experience
            gets(temp);
            strcpy(alt,temp);
        fout<<alt<<"</li></td>"<<endl;
        fout<<"       </ul>"<<endl;
        fout<<"      </tr>"<<endl;
        cout<<"If you Want To Add More Information Press * Sign Or press any other key to continue:";
        cin>>ch;

        if(ch=='*')
            goto label2;

    fout<<"        </table></td>"<<endl;
    fout<<"      </tr>"<<endl;
    fout<<"      </table></td>"<<endl;
    fout<<"  </tr>"<<endl;
    fout<<"</table>"<<endl;

    //STRENGTHS
    fout<<"<table width=\"850\" border=\"0\" align=\"center\">"<<endl;
    fout<<"      <tr>"<<endl;
    fout<<"        <td colspan=\"2\" bgcolor=\"#CCCCCC\"><strong>STRENGTHS</strong></td>"<<endl;
    fout<<"      </tr>"<<endl;
    fout<<"      <tr>"<<endl;
    fout<<"        <td colspan=\"2\" bgcolor=\"#FFFFFF\"><table width=\"829\" border=\"0\" align=\"center\">"<<endl;

    //Input Strengths

    label3:
        clear_input_buffer();
        fout<<" <tr>"<<endl;
        fout<<"      <ul>"<<endl;
        fout<<"        <td width=\"513\"><li>";
        cout<<"Enter the Strengths you have : ";               //Strengths
            gets(temp);
            strcpy(alt,temp);
        fout<<alt<<"</li></td>"<<endl;
        fout<<"        </ul>"<<endl;
        fout<<"      </tr>"<<endl;

        cout<<"If you Want To Add More Information Press * Sign Or press any other key to continue:";
        cin>>ch;

        if(ch=='*')
            goto label3;

        fout<<"     </table></td>"<<endl;
        fout<<"  </tr>"<<endl;

    //Hobbies
    fout<<"  <tr>"<<endl;
    fout<<"    <td colspan=\"2\" bgcolor=\"#CCCCCC\"><strong>HOBBIES</strong></td>"<<endl;
    fout<<"  </tr>"<<endl;
    fout<<"  <tr>"<<endl;
    fout<<"    <td colspan=\"2\" bgcolor=\"#FFFFFF\"><table width=\"829\" border=\"0\" align=\"center\">"<<endl;

    label4:
        clear_input_buffer();
        fout<<"          <tr>"<<endl;
        fout<<"      <ul>"<<endl;
        cout<<"Enter the Hobbies you have : ";               //Hobbies
            gets(temp);
            strcpy(alt,temp);
        fout<<"        <td width=\"513\"><li>"<<alt<<"</li></td>"<<endl;
        fout<<"        </ul>"<<endl;
        fout<<"      </tr>"<<endl;
        cout<<"If you Want To Add More Information Press * Sign Or press any other key to continue:";
        cin>>ch;

        if(ch=='*')
            goto label4;
        fout<<"     </table></td>"<<endl;
        fout<<"  </tr>"<<endl;
        clear_input_buffer();

    //PERSONAL DETAILS
    fout<<"   <tr>"<<endl;
    fout<<" <td colspan=\"2\" bgcolor=\"#CCCCCC\"><strong>PERSONAL DETAILS</strong></td>"<<endl;
    fout<<" </tr>"<<endl;
    fout<<" <tr>"<<endl;
    fout<<"    <td colspan=\"2\" bgcolor=\"#FFFFFF\"><table width=\"829\" border=\"0\" align=\"center\">"<<endl;

    //Input Personal Details
    fout<<" <tr>"<<endl;
    fout<<"        <ul>"<<endl;
    fout<<"          <td><li>Father Name</li></td>"<<endl;
    fout<<"          <td><strong>:</strong></td>"<<endl;
    cout<<"Enter Father Name : ";               //Father Name
            gets(temp);
            strcpy(alt,temp);
    fout<<"          <td>"<<alt<<"</td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;

    fout<<" <tr>"<<endl;
    fout<<"        <ul>"<<endl;
    fout<<"          <td><li>Languages</li></td>"<<endl;
    fout<<"          <td><strong>:</strong></td>"<<endl;
    cout<<"Enter Languages you know : ";               //Languages
            gets(temp);
            strcpy(alt,temp);
    fout<<"          <td>"<<alt<<"</td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;
    fout<<" <tr>"<<endl;
    fout<<"        <ul>"<<endl;
    fout<<"          <td><li>Date of Birth</li></td>"<<endl;
    fout<<"          <td><strong>:</strong></td>"<<endl;
    cout<<"Enter your date of birth : ";               //DOB
            gets(temp);
            strcpy(alt,temp);
    fout<<"          <td>"<<alt<<"</td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;

    fout<<" <tr>"<<endl;
    fout<<"        <ul>"<<endl;
    fout<<"          <td><li>Marital Status</li></td>"<<endl;
    fout<<"          <td><strong>:</strong></td>"<<endl;
    cout<<"Enter your Marital Status : ";               //Marital Status
            gets(temp);
            strcpy(alt,temp);
    fout<<"          <td>"<<alt<<"</td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;

    fout<<" <tr>"<<endl;
    fout<<"        <ul>"<<endl;
    fout<<"          <td><li>Permanent Address</li></td>"<<endl;
    fout<<"          <td><strong>:</strong></td>"<<endl;
    cout<<"Enter your Permanent Address : ";               //Permanent Address
            gets(temp);
            strcpy(alt,temp);
    fout<<"          <td>"<<alt<<"</td>"<<endl;
    fout<<"        </ul>"<<endl;
    fout<<"      </tr>"<<endl;
    fout<<"    </table></td>"<<endl;
    fout<<"      </tr>"<<endl;
     //Place and date
    fout<<"      <tr>"<<endl;
    cout<<"Enter place: ";               //Place
            gets(temp);
            strcpy(alt,temp);
    fout<<"        <td width=\"58%\" bgcolor=\"#FFFFFF\">Place: "<<alt<<"</td>"<<endl;
    fout<<"      </tr>"<<endl;
    fout<<"      <tr>"<<endl;
    fout<<"        <td width=\"58%\" bgcolor=\"#FFFFFF\">Date: "<<time()<<"</td>"<<endl;
    fout<<"        <td width=\"42%\" bgcolor=\"#FFFFFF\"><div align=\"right\"> ("<<name<<") </div></td>"<<endl;
    fout<<"      </tr>"<<endl;
    fout<<"    </table></td>"<<endl;
    fout<<"  </tr>"<<endl;
    fout<<"</table>"<<endl;
    fout<<"</body>"<<endl;
    fout<<"</blockqoute>"<<endl;
    fout<<"</html>"<<endl;
    cout<<"End Of Your CV Press Any Key To Continue : ";
	getch();
	fout.close();
	system(file);
    return 0;
}


