#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount=0;
  int mediumCount=0;
  int highCount=0;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  for(int i=0;i<numberOfBatteries;i++) {       
                                    //checking for count conditions
  if(chargeCycleCounts[i]<400){
    counts.lowCount++;
  }
  else if(chargeCycleCounts[i]>400 && chargeCycleCounts[i]<919){
    counts.mediumCount++;
  }
  else if(chargeCycleCounts[i]>=920){
    counts.highCount++;
  }
}
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  assert(counts.lowCount == lowCount);
  assert(counts.mediumCount ==mediumCount);
  assert(counts.highCount == highCount);
  printf("Done counting :)\n");
}

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}
