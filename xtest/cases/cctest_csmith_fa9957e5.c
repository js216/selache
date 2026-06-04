// SPDX-License-Identifier: MIT
// cctest_csmith_fa9957e5.c --- cctest case csmith_fa9957e5 (csmith seed 4204353509)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa0a767f7 */
/* @exp_ticks 0x357 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 4204353509 -o /home/agent1/fast_data/tmp/csmith_gen__mblvkqe/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int16_t  f0;
   int16_t  f1;
   uint32_t  f2;
   int16_t  f3;
};

union U1 {
   uint32_t  f0;
   struct S0  f1;
};


static int32_t g_2 = 0x96CA2CB5L;
static union U1 g_46 = {0UL};
static int32_t g_47[5] = {0L,0L,0L,0L,0L};
static uint32_t g_70 = 0xAE3254C1L;
static uint32_t g_119 = 0xDF2DAC47L;
static int64_t g_137 = 1L;
static int8_t g_167 = (-2L);
static struct S0 g_169 = {-1L,0xBBC1L,0x9A001620L,-6L};
static uint8_t g_170 = 0x80L;
static int64_t g_172 = (-8L);
static int16_t g_173 = 0L;
static int32_t g_174[4][2] = {{0xF8D3DCD3L,(-10L)},{0xF8D3DCD3L,(-10L)},{0xF8D3DCD3L,(-10L)},{0xF8D3DCD3L,(-10L)}};



static int32_t  func_1(void);
static int32_t  func_5(struct S0  p_6, int64_t  p_7, int64_t  p_8, const int16_t  p_9);
static struct S0  func_10(struct S0  p_11);
static union U1  func_12(const int16_t  p_13, uint32_t  p_14, int64_t  p_15, uint32_t  p_16, int8_t  p_17);




static int32_t  func_1(void)
{ 
    int8_t l_24[3][5] = {{0x0FL,0x0FL,(-1L),0x0FL,0x0FL},{(-1L),0xD1L,(-1L),(-1L),0xD1L},{0x0FL,0x9EL,0x9EL,0x0FL,0x9EL}};
    int i, j;
    for (g_2 = (-9); (g_2 == (-15)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 1))
    { 
        int32_t l_25 = 1L;
        struct S0 l_121 = {0xA5C4L,-1L,4294967295UL,-1L};
        g_173 = func_5(func_10((func_12((((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((((0x30A4L && (safe_div_func_uint8_t_u_u((((l_24[2][1] ^ (l_25 == (safe_sub_func_int32_t_s_s((-1L), g_2)))) != 0xF8L) && 0x10A1434AL), l_25))) , l_24[2][1]) || l_25), l_24[2][1])), l_24[2][1])) > l_25) > (-7L)), g_2, l_24[2][1], g_2, l_25) , l_121)), g_169.f3, g_169.f2, g_169.f0);
    }
    return g_174[1][0];
}



static int32_t  func_5(struct S0  p_6, int64_t  p_7, int64_t  p_8, const int16_t  p_9)
{ 
    uint64_t l_171 = 0xA2376BBF86D33B1CLL;
    g_170 = (g_119 , p_6.f0);
    g_172 = l_171;
    return g_170;
}



static struct S0  func_10(struct S0  p_11)
{ 
    uint8_t l_124 = 0x9CL;
    int32_t l_131 = 0xCDA38E98L;
    int32_t l_164 = 7L;
    int32_t l_165[1];
    int32_t l_166 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_165[i] = (-7L);
lbl_168:
    for (g_46.f1.f1 = (-20); (g_46.f1.f1 > (-12)); g_46.f1.f1 = safe_add_func_uint32_t_u_u(g_46.f1.f1, 6))
    { 
        uint64_t l_136 = 0x277B54E5BA6927BALL;
        int32_t l_139 = (-5L);
        --l_124;
        for (g_119 = 0; (g_119 <= 4); g_119 += 1)
        { 
            int32_t l_138 = 0x256C2D0CL;
            for (p_11.f2 = 0; (p_11.f2 <= 4); p_11.f2 += 1)
            { 
                int i;
                l_139 = (safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((((g_47[g_119] ^ (((l_131 = 0x836AL) > ((safe_mul_func_int16_t_s_s(((g_137 = (safe_sub_func_int32_t_s_s((l_136 = g_2), 0xACB5B974L))) | g_70), l_124)) | l_138)) > (-1L))) > g_119) >= 0xCFD22C8CL) ^ g_70), p_11.f3)), p_11.f1));
                l_131 = (l_138 && ((safe_add_func_int64_t_s_s(l_138, g_2)) == p_11.f1));
            }
        }
    }
    g_167 |= ((safe_mod_func_uint32_t_u_u((p_11.f2 = ((safe_lshift_func_uint8_t_u_s((((l_165[0] = ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_137, ((safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((l_164 = (((safe_lshift_func_uint8_t_u_s(0x25L, 2)) > (l_131 &= ((safe_add_func_uint64_t_u_u(g_119, g_2)) | p_11.f3))) != g_70)), l_124)), 1)), p_11.f2)), p_11.f0)) , 0x6AL))), p_11.f1)) | g_46.f0)) != g_119) < p_11.f3), 3)) || g_2)), g_47[0])) ^ l_166);
    if (l_166)
        goto lbl_168;
    return g_169;
}



static union U1  func_12(const int16_t  p_13, uint32_t  p_14, int64_t  p_15, uint32_t  p_16, int8_t  p_17)
{ 
    union U1 l_35 = {0x1C17854CL};
    int32_t l_38 = 7L;
    int32_t l_39 = (-1L);
    int32_t l_40 = 0x9002FCE4L;
    uint64_t l_41[2][3] = {{0x149F7FAE0CD5C0F4LL,0x149F7FAE0CD5C0F4LL,0x149F7FAE0CD5C0F4LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
    union U1 l_120[4] = {{0xB82127F5L},{0xB82127F5L},{0xB82127F5L},{0xB82127F5L}};
    int i, j;
    if (((g_2 < ((+0xF7L) && (l_40 = (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_39 = (safe_mul_func_int16_t_s_s(((l_35 , ((safe_rshift_func_uint16_t_u_s((((((p_16 && p_13) ^ g_2) || 1UL) , l_35.f0) <= l_35.f0), l_38)) || p_15)) ^ p_16), 0x525AL))), 1UL)), g_2))))) || l_41[0][0]))
    { 
        uint64_t l_44 = 0x74AA7FCF62392E18LL;
        int32_t l_45 = 1L;
        for (l_38 = 4; (l_38 == 21); l_38++)
        { 
            l_44 = g_2;
        }
        l_45 &= l_35.f0;
        return g_46;
    }
    else
    { 
        int16_t l_61[2];
        int i;
        for (i = 0; i < 2; i++)
            l_61[i] = 0L;
        for (l_38 = 0; (l_38 <= 1); l_38 += 1)
        { 
            uint16_t l_62 = 0x11E3L;
            if (p_13)
                break;
            for (l_35.f0 = 0; (l_35.f0 <= 1); l_35.f0 += 1)
            { 
                int32_t l_63 = 4L;
                int i, j;
                g_47[3] &= l_41[l_35.f0][(l_35.f0 + 1)];
                l_63 = (0x79F1A7DFAE38EDFCLL & (safe_lshift_func_int16_t_s_s(((((((!(safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((0x1DD1L == (safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s((-5L), (safe_div_func_uint16_t_u_u(l_61[1], l_62)))), 0xBF66L))), g_46.f0)), l_41[1][2]))) >= 1L) , l_41[l_35.f0][(l_35.f0 + 1)]) | p_15) & l_61[1]) == g_47[3]), g_46.f0)));
            }
        }
    }
    if ((safe_lshift_func_int8_t_s_s(p_16, (safe_lshift_func_uint16_t_u_s(1UL, 9)))))
    { 
        int32_t l_81 = 0xB07C152AL;
        int32_t l_101 = 1L;
        for (g_46.f1.f3 = 0; (g_46.f1.f3 <= (-20)); g_46.f1.f3 = safe_sub_func_uint64_t_u_u(g_46.f1.f3, 2))
        { 
            int16_t l_73[4][5] = {{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L}};
            int32_t l_74 = 0x8D18043AL;
            union U1 l_75 = {4294967290UL};
            int i, j;
            if (g_2)
                break;
            g_70 = 0xDA297315L;
            for (l_35.f0 = (-1); (l_35.f0 < 30); l_35.f0 = safe_add_func_uint64_t_u_u(l_35.f0, 1))
            { 
                l_74 = l_73[3][1];
                return l_75;
            }
        }
        for (l_35.f0 = 0; (l_35.f0 < 24); l_35.f0 = safe_add_func_int64_t_s_s(l_35.f0, 5))
        { 
            int8_t l_80[2];
            int32_t l_99[2];
            int i;
            for (i = 0; i < 2; i++)
                l_80[i] = 0xC1L;
            for (i = 0; i < 2; i++)
                l_99[i] = 0L;
            l_39 = ((0xFA567606L & g_2) == ((l_81 = (safe_div_func_uint16_t_u_u(l_80[1], p_17))) > 0xA6L));
            for (p_14 = 0; (p_14 <= 14); ++p_14)
            { 
                int32_t l_100 = 0xD74DCC0CL;
                l_101 |= ((safe_sub_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(g_47[0], ((safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((g_70 ^ (((((p_13 , ((safe_unary_minus_func_uint16_t_u(((((((g_46.f0 = (l_99[0] & g_2)) < p_13) ^ 0x3C0F0EF9L) == g_47[3]) & p_14) && 1L))) > g_70)) && l_100) >= l_35.f0) >= p_16) < l_81)), 1)), 0x05L)) < 0L) & p_16), 1L)), g_47[3])) <= 1UL))) && g_70) <= 0x07F6L), 0xC45DL)) , 0x19AA3B2AL);
            }
        }
        for (l_38 = 0; (l_38 != (-6)); l_38--)
        { 
            uint8_t l_114 = 2UL;
            int32_t l_115[3];
            int i;
            for (i = 0; i < 3; i++)
                l_115[i] = 0x1933AC35L;
            l_115[0] = ((safe_rshift_func_uint16_t_u_s((l_101 | (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((0x86L > g_47[3]) | (l_81 = ((((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(0UL, 6)), p_15)) || g_47[2]) == 0x947FL) < p_15))) && 0L), l_114)), p_15))), p_16)) , p_15);
            if (g_46.f0)
                continue;
            for (p_16 = 0; (p_16 <= 2); p_16 += 1)
            { 
                int i;
                l_115[p_16] = g_46.f0;
            }
        }
    }
    else
    { 
        int32_t l_118 = 0x5129FF95L;
        g_119 = (((((~(+0x83L)) && (0x81BEL | (l_118 == (0x7173955FL | g_47[3])))) != 4294967295UL) < g_47[2]) >= l_39);
        return g_46;
    }
    l_40 = g_70;
    return l_120[1];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);

    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_169.f0, "g_169.f0", print_hash_value);
    transparent_crc(g_169.f1, "g_169.f1", print_hash_value);
    transparent_crc(g_169.f2, "g_169.f2", print_hash_value);
    transparent_crc(g_169.f3, "g_169.f3", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_174[i][j], "g_174[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
