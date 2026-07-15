// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int> jobSequencing(vector<int> &deadline,
//                            vector<int> &profit) {
//     int n = deadline.size();
//     int cnt = 0;
//     int totProfit = 0;

//     // pair the profit and deadline of
//     // all the jos together
//     vector<pair<int, int>> jobs;
//     for (int i = 0; i < n; i++) {
//         jobs.push_back({profit[i], deadline[i]});
//     }

//     // sort the jobs based on profit
//     // in decreasing order
//     sort(jobs.begin(), jobs.end(), 
//                 greater<pair<int, int>>());

//     vector<int> slot(n, 0);
//     for (int i = 0; i < n; i++) {
//         int start = min(n, jobs[i].second) - 1;
//         for (int j = start; j >= 0; j--) {

//             // if slot is empty
//             if (slot[j] == 0) {
//                 slot[j] = 1;
//                 cnt++;
//                 totProfit+= jobs[i].first;
//                 break;
//             }
//         }
//     }
    
//     return {cnt, totProfit};
// }

// int main() {
//     vector<int> deadline = {2, 1, 2, 1, 1};
//     vector<int> profit = {100, 19, 27, 25, 15};
//     vector<int> ans = jobSequencing(deadline, profit);
//     cout<<ans[0]<<" "<<ans[1];
//     return 0;
// }

// method - 2 

#include <iostream>      // Used for input and output
#include <vector>        // Used to store all jobs
#include <algorithm>     // Used for sort()
using namespace std;

//------------------------------------------------------------
// Structure to represent one Job
//------------------------------------------------------------
struct Job
{
    char id;         // Unique Job ID
    int deadline;    // Deadline of the job
    int profit;      // Profit earned after completing the job
};

//------------------------------------------------------------
// Comparator Function
//
// Purpose:
// Sort all jobs in descending order of profit.
//
// Highest profit job should come first because
// Job Scheduling follows the Greedy Approach.
//------------------------------------------------------------
bool compare(Job a, Job b)
{
    return a.profit > b.profit;
}

//------------------------------------------------------------
// Job Scheduling Function
//------------------------------------------------------------
void jobScheduling(vector<Job> &jobs)
{
    //--------------------------------------------------------
    // Step 1
    //
    // Sort all jobs according to maximum profit.
    //
    // After sorting,
    // Highest Profit
    //        ↓
    // Lowest Profit
    //--------------------------------------------------------
    sort(jobs.begin(), jobs.end(), compare);

    //--------------------------------------------------------
    // Step 2
    //
    // Find the maximum deadline among all jobs.
    //
    // Why?
    //
    // Because the number of available time slots
    // depends upon the largest deadline.
    //--------------------------------------------------------
    int maxDeadline = 0;

    for (Job job : jobs)
    {
        maxDeadline = max(maxDeadline, job.deadline);
    }

    //--------------------------------------------------------
    // Step 3
    //
    // Create Slot Vector
    //
    // Size = Maximum Deadline + 1
    //
    // Why +1?
    //
    // Because deadlines start from 1.
    //
    // Index 0 is ignored.
    //
    // Every value is initialized with -1.
    //
    // -1 means
    //
    // "No Job Assigned Yet"
    //--------------------------------------------------------
    vector<int> slot(maxDeadline + 1, -1);

    //--------------------------------------------------------
    // Variable to store total profit.
    //--------------------------------------------------------
    int totalProfit = 0;

    //--------------------------------------------------------
    // Variable to count scheduled jobs.
    //--------------------------------------------------------
    int totalJobs = 0;

    //--------------------------------------------------------
    // Step 4
    //
    // Traverse every job one by one.
    //
    // Since jobs are already sorted,
    // highest profit jobs are processed first.
    //--------------------------------------------------------
    for (int i = 0; i < jobs.size(); i++)
    {
        //----------------------------------------------------
        // Start checking from the job's deadline.
        //
        // If that slot is occupied,
        // move backwards.
        //
        // Example
        //
        // Deadline = 3
        //
        // Check
        //
        // 3
        // ↓
        // 2
        // ↓
        // 1
        //----------------------------------------------------
        for (int j = jobs[i].deadline; j >= 1; j--)
        {
            //------------------------------------------------
            // If the slot is empty,
            // schedule the current job.
            //------------------------------------------------
            if (slot[j] == -1)
            {
                //--------------------------------------------
                // Store the index of the job.
                //
                // We store the index instead of the job
                // itself because later we can easily
                // access the complete job information.
                //--------------------------------------------
                slot[j] = i;

                //--------------------------------------------
                // Add current job profit.
                //--------------------------------------------
                totalProfit += jobs[i].profit;

                //--------------------------------------------
                // Increase scheduled job count.
                //--------------------------------------------
                totalJobs++;

                //--------------------------------------------
                // Stop searching because the job
                // has already been scheduled.
                //--------------------------------------------
                break;
            }
        }
    }

    //--------------------------------------------------------
    // Print Scheduled Jobs
    //--------------------------------------------------------
    cout << "Selected Jobs:\n\n";

    //--------------------------------------------------------
    // Traverse every slot.
    //
    // Ignore slot 0.
    //--------------------------------------------------------
    for (int i = 1; i <= maxDeadline; i++)
    {
        //----------------------------------------------------
        // If slot contains a job
        //----------------------------------------------------
        if (slot[i] != -1)
        {
            cout << "Time Slot "
                 << i
                 << " -> "
                 << jobs[slot[i]].id
                 << endl;
        }
    }

    cout << "\nTotal Jobs Completed : "
         << totalJobs
         << endl;

    cout << "Maximum Profit : "
         << totalProfit
         << endl;
}

//------------------------------------------------------------
// Driver Function
//------------------------------------------------------------
int main()
{
    //--------------------------------------------------------
    // Input Example
    //
    // Job ID
    // Deadline
    // Profit
    //--------------------------------------------------------
    vector<Job> jobs =
    {
        {'J', 2, 100},   // J1
        {'K', 1, 19},    // J2
        {'L', 2, 27},    // J3
        {'M', 1, 25},    // J4
        {'N', 3, 15}     // J5
    };

    //--------------------------------------------------------
    // Call Job Scheduling Algorithm
    //--------------------------------------------------------
    jobScheduling(jobs);

    return 0;
}

/*
==============================================================
TIME COMPLEXITY
==============================================================

Suppose,

n = Total Number of Jobs

d = Maximum Deadline

--------------------------------------------------------------
1. Sorting Jobs
--------------------------------------------------------------

sort()

Time Complexity

O(n log n)

--------------------------------------------------------------
2. Finding Maximum Deadline
--------------------------------------------------------------

Traverse every job once.

Time Complexity

O(n)

--------------------------------------------------------------
3. Scheduling Every Job
--------------------------------------------------------------

Outer Loop

Runs for every job.

O(n)

--------------------------------------------------------------

Inner Loop

For every job,
we may travel backward from

Deadline

↓

1

Worst Case

O(d)

--------------------------------------------------------------

Overall Scheduling Complexity

O(n × d)

--------------------------------------------------------------

Overall Time Complexity

O(n log n + n × d)

If

d ≤ n

(which is generally true),

then

Overall Complexity

O(n²)

==============================================================
SPACE COMPLEXITY
==============================================================

Jobs Vector

O(n)

--------------------------------------------------------------

Slot Vector

Size = Maximum Deadline + 1

Space = O(d)

--------------------------------------------------------------

Other Variables

O(1)

--------------------------------------------------------------

Overall Space Complexity

O(n + d)

==============================================================
WHY DOES THIS GREEDY ALGORITHM WORK?
==============================================================

✔ Jobs are first sorted according to
maximum profit.

✔ Highest profit jobs are always
considered first.

✔ Every selected job is placed
at the latest available slot
before its deadline.

✔ Earlier slots remain available
for jobs having smaller deadlines.

✔ This greedy strategy guarantees
the maximum possible profit.

==============================================================
OUTPUT
==============================================================

Selected Jobs

Time Slot 1 -> L

Time Slot 2 -> J

Time Slot 3 -> N

Total Jobs Completed : 3

Maximum Profit : 142

==============================================================
*/
