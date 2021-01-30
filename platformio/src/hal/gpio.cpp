// GPIO initialization.

#include "gpio.h"

namespace gpio {
// Configure pins
void MX_GPIO_Init() {
  // TODO: do we need this? Is was not generated by 
  // the MxCube.
  __HAL_RCC_GPIOD_CLK_ENABLE();

  // --- From here, copied from MxCube generated code.

  GPIO_InitTypeDef GPIO_InitStruct = {0};
  
   /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, LED1_Pin|LED2_Pin|LED3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, TFT_WR_Pin|TFT_RST_Pin|TFT_D14_Pin|TFT_D12_Pin
                          |TFT_D11_Pin|TFT_D9_Pin|TFT_D8_Pin|TFT_D7_Pin
                          |TFT_D5_Pin|TFT_D6_Pin|TFT_D10_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, TFT_D4_Pin|TFT_D0_Pin|TFT_D1_Pin|TFT_D2_Pin
                          |TFT_D3_Pin|TFT_D13_Pin|TFT_D15_Pin|TFT_DC_Pin
                          |TFT_BL_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : PCPin PCPin PCPin */
  GPIO_InitStruct.Pin = LED1_Pin|LED2_Pin|LED3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin PAPin
                           PAPin PAPin PAPin PAPin
                           PAPin PAPin */
  GPIO_InitStruct.Pin = TFT_WR_Pin|TFT_RST_Pin|TFT_D14_Pin|TFT_D12_Pin
                          |TFT_D11_Pin|TFT_D9_Pin|TFT_D8_Pin|TFT_D7_Pin
                          |TFT_D5_Pin|TFT_D10_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin PBPin PBPin
                           PBPin PBPin PBPin PBPin
                           PBPin */
  GPIO_InitStruct.Pin = TFT_D4_Pin|TFT_D0_Pin|TFT_D1_Pin|TFT_D2_Pin
                          |TFT_D3_Pin|TFT_D13_Pin|TFT_D15_Pin|TFT_DC_Pin
                          |TFT_BL_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = TFT_D6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(TFT_D6_GPIO_Port, &GPIO_InitStruct);
}

}  // namespace gpio
