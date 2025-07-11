#pragma once

#include "algorithm/IFourierTransformAlgorithm.h"
#include "algorithm/SupportedSequences.h"


class Bluestein_I_Stockham_R2 final : public IFourierTransformAlgorithm {
    size_t l = 0;

public:
    static constexpr auto NAME = "B-I+S-2";

    [[nodiscard]] int supported_sequences() const override {
        return ANY;
    }

protected:
    void initialize(size_t n, ft_complex *in, ft_complex *out) override;

    void forward(size_t n, ft_complex *in, ft_complex *out) override;
};
