#pragma once

#include "algorithm/IFourierTransformAlgorithm.h"
#include "algorithm/SupportedSequences.h"


class Radix4FFT : public IFourierTransformAlgorithm {
public:
    [[nodiscard]] int supported_sequences() const override {
        return RADIX_4;
    }

protected:
    void check_preconditions(size_t n, ft_complex *in, ft_complex *out) override;
};
