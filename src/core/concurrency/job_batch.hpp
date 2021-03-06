/**
 * Copyright (C) Sergio Hernandez - All Rights Reserved
 * Author: Sergio Hernandez <contact.sergiohernandez@gmail.com>
 * Date  : 30.07.2020
 */

#ifndef JOB_BATCH_HPP
#define JOB_BATCH_HPP

#include "job.hpp"
#include <vector>

namespace adamant {
namespace concurrency {

class JobBatch {
    public:
        JobStatus* status;  // It's public because of the atomic operations
        // Generic constructor
        JobBatch(std::vector<Job*> jobs);
        // SIMD constructor
        JobBatch(Action* action, std::vector<uintptr_t> params, JobPriority priority);
        void join();
        std::vector<Job*> getJobs();

    private:
        std::vector<Job*> m_jobs;
};

}  // namespace concurrency
}  // namespace adamant

#endif
