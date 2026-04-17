# Dominick Walters
## Computer Science ePortfolio

Welcome to my CS-499 ePortfolio, showcasing my enhancements and development growth.

## Professional Self-Assessment
I am currently completing my Bachelor’s degree in Computer Science, and throughout this program I have developed a strong foundation in software development, problem solving, and system design. My experience includes working with programming languages such as C++ and Python, as well as technologies like OpenGL and MongoDB.

One of my biggest strengths is my ability to break down complex problems into manageable components. This approach has allowed me to improve existing projects by focusing on structure, efficiency, and clarity. Throughout this course, I enhanced multiple artifacts by refining code organization, improving algorithm performance, and optimizing data handling.

In the area of software design and engineering, I strengthened my ability to create modular and maintainable code. For algorithms and data structures, I focused on improving efficiency and selecting better approaches to solve problems. In databases, I improved how applications interact with data through more effective CRUD operations and query handling.

The code review component of this ePortfolio demonstrates my ability to analyze code critically and identify areas for improvement. This is an important skill in real-world development, where collaboration and code quality are essential.

These experiences align with my goal of becoming a software developer. I am particularly interested in building efficient systems and continuing to grow my technical skill set. My background in the Marine Corps has also contributed to my strong work ethic, time management, and ability to perform under pressure.

Overall, this ePortfolio reflects my growth as a developer and demonstrates my ability to learn, adapt, and improve my work over time.

---

## Code Review

This code review focuses on the original versions of the artifacts I selected for enhancement in CS-499, specifically the C++ projects used for software design and algorithms, along with the database implementation used in the databases milestone. The goal of this review was to identify weaknesses in structure, logic, and data handling so I could improve them through the three enhancement phases.

Looking at the original C++ code used in the software design and engineering milestone, the program worked, but the structure was pretty basic. Most of the logic was written in a way that made everything feel grouped together, which made it harder to follow and maintain. There wasn’t much separation between responsibilities, and some of the naming could have been clearer. This made the code functional, but not very scalable or easy to expand on.

For the algorithms and data structures portion, the original implementation completed the task, but it wasn’t very efficient. There were areas where operations were repeated or could have been simplified. The logic worked, but it wasn’t optimized, especially when thinking about how it would perform with larger inputs. This showed that while the solution was correct, it could be improved by refining the algorithm and making better use of structure and flow.

For the database artifact, the original version handled data in a very basic way using a text-based approach. It worked for storing and retrieving data, but it lacked organization and efficiency. The way data was accessed and processed could be improved, and there wasn’t much structure around how CRUD operations were handled. This made it functional, but not very reliable or scalable if the system were to grow.

Based on this review, I focused my enhancements on three main areas: improving code structure and readability, optimizing logic and reducing unnecessary operations, and improving how data was handled and organized. Each of these directly aligned with the three milestones I completed in this course.

Overall, this code review helped me see that just because code works doesn’t mean it’s well-designed. Going through this process gave me a clear understanding of where my code needed improvement and helped guide the changes I made. It also showed my ability to look at my own work critically and improve it in a way that makes it more efficient, maintainable, and easier to understand.

---

## Artifacts

### Artifact 1: Software Design and Engineering (Milestone 3-2)

This artifact demonstrates improvements in software structure and overall design. The original version of the project contained a basic implementation with limited organization and minimal separation of responsibilities. This made the code harder to maintain and expand.

In the enhanced version, I refactored the code to improve modularity and readability. I separated functionality into more clearly defined components, improved naming conventions, and added comments to better explain key sections of the code. These changes resulted in a cleaner and more maintainable structure, making future updates and debugging more efficient.

- Original Version: [View Files](https://github.com/RevsXBL/RevsXBL.github.io/raw/main/Milestone2Project/Milestone2Project/original.cpp)
- Enhanced Version: [View Files](https://github.com/RevsXBL/RevsXBL.github.io/raw/main/Milestone2Project/Milestone2Project/enhanced.cpp)

---

### Artifact 2: Algorithms & Data Structures (Milestone 4-2)

This artifact demonstrates improvements in algorithm efficiency and overall logic. The original version of the project used a basic approach to solving the problem, which worked but was not optimized and included some redundant or unnecessary operations.

In the enhanced version, I improved the logic by refining the algorithm and making better use of appropriate data structures. These changes reduced inefficiencies and improved performance, especially in scenarios involving repeated operations or larger data sets. This enhancement demonstrates my ability to analyze existing logic and apply more effective algorithmic solutions.

- Original Version: [View Files](https://github.com/RevsXBL/RevsXBL.github.io/raw/main/Milestone3Project/Milestone3Project/original.cpp)
- Enhanced Version: [View Files](https://github.com/RevsXBL/RevsXBL.github.io/raw/main/Milestone3Project/Milestone3Project/enhanced.cpp)

---

### Artifact 3: Databases (Milestone 5-2)

This artifact demonstrates improvements in database functionality and data handling. The original version of the project implemented basic database interactions but lacked efficiency and structure in how data was retrieved and managed.

In the enhanced version, I improved CRUD operations and optimized how data is queried and processed. I refined how the application interacts with the database to ensure more efficient data retrieval and better organization of information. These improvements increase reliability and scalability, demonstrating my ability to design and work with database-driven systems.

- Original Version: [View Files](https://github.com/RevsXBL/RevsXBL.github.io/raw/main/CS499_Milestone4_Database/Original.txt)
- Enhanced Version: [View Files](https://github.com/RevsXBL/RevsXBL.github.io/raw/main/CS499_Milestone4_Database/Enhanced.txt)

---
## Narratives
### Software Engineering Narrative
This artifact is based on the software design and engineering enhancement completed in Milestone 3-2. The original version of the program was functional and capable of performing basic arithmetic operations based on user input, but the overall structure was very limited. Most of the logic was contained within a single block inside the main function, which made the program harder to read, maintain, and expand. One of the main issues with the original implementation was the lack of organization. Because everything was handled in one place, it increased the difficulty of debugging and made it more likely for errors to occur as the program grew. In addition, the program did not include any form of input validation. It assumed that all user input would be correct, which is not realistic in real-world scenarios. This meant that invalid input, such as non-numeric values, could cause the program to fail or behave unpredictably. In the enhanced version, I focused on improving the overall structure, reliability, and usability of the program. I refactored the code by separating functionality into smaller, more focused functions. For example, input handling and menu selection were moved into their own sections. This made the program easier to read and allowed each part to be maintained independently, while also reducing repetition. I also implemented input validation to ensure the program could safely handle incorrect or unexpected input. By checking whether user input is valid before processing it, the program can now recover from errors and prompt the user again instead of crashing. Additionally, I added error handling for division operations to prevent division by zero, providing a clear message to the user instead of allowing a runtime failure. Through this enhancement, I learned how important structure and validation are in software development. While the original version worked, improving the organization and reliability made the program much easier to understand and more practical for real-world use. This artifact demonstrates my ability to apply software engineering principles to create more maintainable, scalable, and user-friendly code.
[Download Word Version](https://github.com/RevsXBL/RevsXBL.github.io/raw/main/CS-499%203-2%20Enhancement%20Explanation.docx)
### Algorithms & Data Structures Narrative
This artifact is based on the algorithms and data structures enhancement completed in Milestone 4-2. The project is a C++ course planning program originally developed in CS-300. Its purpose is to read course data from a file, store it using an appropriate data structure, and allow users to search for and display course information, including prerequisites. The original version of the program worked as intended and used a map data structure to store course information efficiently. While the data structure itself was appropriate, the overall logic around input handling and usability was limited. The program assumed user input would always be valid and did not handle edge cases well, which could lead to unexpected behavior. I chose this artifact because it demonstrates my ability to improve how algorithms and data structures are used within a program. In the enhanced version, I focused on refining the logic rather than replacing the core data structure. I added input validation to ensure the program handles incorrect input more reliably and standardized course number formatting to improve search accuracy. These changes made the program more consistent and dependable. I also improved how information is displayed to the user by handling cases where data is missing or not yet loaded. This made the program easier to use and more user-friendly overall. Instead of changing the map structure, I focused on improving how it is implemented, which reflects a better understanding of when to optimize existing solutions rather than replace them. Through this enhancement, I learned that efficiency is not just about choosing the right data structure, but also about how it is used within the program. Even when a solution works, there is always room to improve reliability and usability. This artifact demonstrates my ability to analyze existing logic and make meaningful improvements that enhance performance and user experience.
[Download Word Version](https://github.com/RevsXBL/RevsXBL.github.io/raw/main/CS-499%204-2%20Enhancement%20Explanation.docx)
### Databases Narrative
This artifact is based on the database enhancement completed in Milestone 5-2. The project focuses on improving how data is stored, retrieved, and managed within the application. The original version used a basic text-based approach to handle data, which worked for simple operations but lacked structure and efficiency. I chose this artifact because it demonstrates my ability to improve how an application interacts with stored data. While the original implementation was functional, it did not scale well and lacked clear organization for handling CRUD operations. This made the system harder to maintain and less reliable as complexity increased. In the enhanced version, I focused on improving the structure of data handling and refining how information is retrieved and updated. I organized data interactions more clearly and reduced inefficiencies in how the program processes stored data. These changes made the system more consistent, easier to understand, and more reliable overall. One of the main things I learned from this process is how important proper data organization is, even in simpler systems. While the original version worked, improving how the data was managed made a noticeable difference in usability and performance. One challenge I faced was making sure the improvements didn’t break existing functionality while still making meaningful changes. This artifact demonstrates my ability to work with data-driven systems and improve how information is managed within an application. It reflects my understanding of how structured data handling contributes to better performance, scalability, and overall software reliability.
[Download Word Version](https://github.com/RevsXBL/RevsXBL.github.io/raw/main/CS-499%205-2%20Enhancement%20Explanation.docx)
