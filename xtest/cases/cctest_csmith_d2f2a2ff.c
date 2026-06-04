// SPDX-License-Identifier: MIT
// cctest_csmith_d2f2a2ff.c --- cctest case csmith_d2f2a2ff (csmith seed 3539116799)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xba9ea38 */
/* @exp_ticks 0x3f0 */

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

// Options:   -s 3539116799 -o /home/agent1/fast_data/tmp/csmith_gen_nlr914q4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   uint16_t  f1;
   const struct S0  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint64_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int8_t  f3;
   uint64_t  f4;
};
#pragma pack(pop)

union U3 {
   uint32_t  f0;
   const int16_t  f1;
};


static uint32_t g_10 = 0xCACFF8EEL;
static int32_t g_42 = 0x402095D7L;
static int64_t g_43[3][3] = {{0x5BB31CF6A1241A59LL,0x04D9FABAF1BA1372LL,0x5BB31CF6A1241A59LL},{0x5BB31CF6A1241A59LL,0x04D9FABAF1BA1372LL,0x5BB31CF6A1241A59LL},{0x5BB31CF6A1241A59LL,0x04D9FABAF1BA1372LL,0x5BB31CF6A1241A59LL}};
static uint32_t g_65 = 0UL;
static union U3 g_67 = {2UL};
static uint32_t g_73 = 4294967292UL;
static uint16_t g_126 = 0x337AL;
static int8_t g_154 = 0x66L;
static int64_t g_167 = 0xD77870C763640059LL;
static uint8_t g_168 = 0xD8L;
static int32_t g_188 = 0x157F97FFL;
static uint8_t g_196 = 1UL;
static int32_t g_201 = 0x5E798639L;
static uint16_t g_203 = 0x77E2L;
static int32_t g_209 = 1L;
static struct S2 g_227 = {1UL,0L,0xA2765A6CL,0x30L,0UL};
static int32_t g_230 = 0x5DE3CFF6L;
static uint64_t g_231 = 0x7DB854CE0AEB5C81LL;



static uint32_t  func_1(void);
static int8_t  func_13(const uint16_t  p_14);
static struct S0  func_28(union U3  p_29, uint16_t  p_30, union U3  p_31);
static struct S1  func_32(uint8_t  p_33, uint8_t  p_34);




static uint32_t  func_1(void)
{ 
    uint16_t l_4 = 0x4AD7L;
    int32_t l_7 = 0xBEDCC590L;
    int32_t l_229[2];
    int i;
    for (i = 0; i < 2; i++)
        l_229[i] = 0x9C70C568L;
    l_7 = (safe_lshift_func_uint16_t_u_u((--l_4), (l_7 == l_7)));
    for (l_4 = 27; (l_4 == 33); l_4++)
    { 
        uint64_t l_195 = 0x8B170AB691963C95LL;
        int32_t l_257[4];
        int i;
        for (i = 0; i < 4; i++)
            l_257[i] = 2L;
        g_196 = (g_10 >= ((safe_rshift_func_int8_t_s_s(func_13(l_4), 1)) || (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((g_126--) ^ (0x7A423BFDL || l_195)) == g_188), g_168)), 11))));
        g_42 &= (safe_lshift_func_uint16_t_u_s((((((((safe_add_func_int16_t_s_s((g_201 = l_195), (+(g_126 ^= (0x765711E9L < 0x028DA7E5L))))) ^ (0xACL | l_4)) | l_195) ^ g_154) | g_203) , g_43[0][2]) > g_168), g_188));
        if ((g_67.f1 > (safe_mod_func_uint8_t_u_u(g_67.f1, (g_188 , (((safe_rshift_func_int8_t_s_u((l_4 ^ g_188), 5)) | g_73) , g_65))))))
        { 
            uint64_t l_208 = 4UL;
            int32_t l_212[4][1] = {{1L},{0x0667DD3FL},{1L},{0x0667DD3FL}};
            uint64_t l_219 = 5UL;
            int i, j;
            if (((g_168 > g_168) ^ ((g_209 ^= ((l_208 >= ((18446744073709551615UL > g_73) > (-2L))) & l_7)) | l_195)))
            { 
                uint16_t l_213 = 0xFBF4L;
                l_213 = (((g_209 && g_43[0][2]) , (safe_sub_func_uint16_t_u_u((((l_212[0][0] |= (l_195 && ((((0L && 0x9BL) && (-10L)) <= l_4) > (-1L)))) , g_43[2][0]) , g_65), g_65))) , (-5L));
            }
            else
            { 
                uint16_t l_214 = 0xFDEFL;
                l_212[2][0] &= (g_42 || g_67.f0);
                g_209 = (l_7 |= l_208);
                l_214 = g_203;
            }
            for (g_73 = (-15); (g_73 <= 60); g_73++)
            { 
                int8_t l_218 = (-1L);
                int32_t l_228 = 0xA816B724L;
                l_7 = (((~(((--l_219) & (safe_add_func_uint16_t_u_u((1UL <= (~(g_43[0][2] = (g_43[1][2] , (g_67.f0 | ((safe_sub_func_int8_t_s_s((g_227.f3 = (g_227 , 1L)), 1UL)) == g_67.f0)))))), 0x7DD8L))) , l_212[3][0])) , 1UL) || 0x804EF63F154D3D32LL);
                g_231--;
            }
            for (g_168 = 0; (g_168 <= 0); g_168 += 1)
            { 
                uint64_t l_234 = 0UL;
                int i, j;
                l_212[(g_168 + 3)][g_168] ^= l_234;
                l_212[(g_168 + 3)][g_168] |= ((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(253UL, ((((safe_unary_minus_func_uint32_t_u(((safe_mul_func_int8_t_s_s(0xE4L, (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((func_32((0xFABAL < (((l_208 >= 4294967293UL) >= g_231) , g_73)), l_229[1]) , g_154) | 0UL), 0L)), 1)), 13)))) || g_67.f0))) | l_234) > l_219) == l_234))), l_195)) == l_195);
                l_212[0][0] = ((g_209 ^ g_73) , (safe_sub_func_int64_t_s_s(g_43[0][2], (safe_lshift_func_uint16_t_u_u((g_227 , l_234), g_10)))));
            }
        }
        else
        { 
            int32_t l_255 = 0xD6969EBCL;
            int32_t l_262 = 0x1AB9D19FL;
            l_255 ^= (safe_div_func_uint64_t_u_u((~0x192606F87C35278CLL), 0x4A01BD5C1137C9BDLL));
            l_7 &= (l_262 ^= ((l_257[1] = (+(g_227.f2 >= l_229[1]))) , (g_209 ^= ((((safe_mod_func_int32_t_s_s((safe_add_func_int64_t_s_s((l_255 & (g_231 == g_227.f2)), 1UL)), 1L)) <= 0xCCC3FB247190EA31LL) || l_255) < 0x6BL))));
        }
    }
    return g_209;
}



static int8_t  func_13(const uint16_t  p_14)
{ 
    uint16_t l_15 = 0xF1D6L;
    int32_t l_44 = (-1L);
    union U3 l_68[4] = {{1UL},{1UL},{1UL},{1UL}};
    struct S0 l_187 = {0L};
    int i;
    g_188 = (l_15 , (p_14 < ((safe_sub_func_int32_t_s_s(((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((func_28((func_32((l_44 = (~(safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((g_43[0][2] = ((safe_add_func_uint32_t_u_u((1L ^ (g_42 &= p_14)), l_15)) , 0x9F71L)), p_14)), l_15)))), p_14) , g_67), g_10, l_68[1]) , l_187) , p_14) == l_68[1].f0), 0x41834B80L)), l_15)), g_154)), 10)), g_67.f0)) , l_15), l_68[1].f1)) , 0x4ED8L)));
    return l_68[1].f0;
}



static struct S0  func_28(union U3  p_29, uint16_t  p_30, union U3  p_31)
{ 
    int32_t l_69 = 4L;
    int32_t l_70 = 0xDF97EF3AL;
    int32_t l_71 = 0x72677139L;
    int32_t l_72 = 0x219042FBL;
    union U3 l_138 = {0xD34BCD69L};
    struct S0 l_186 = {0x61E06730L};
lbl_185:
    if (l_69)
    { 
lbl_137:
        --g_73;
    }
    else
    { 
        uint32_t l_78 = 4294967294UL;
        union U3 l_91 = {18446744073709551615UL};
        int32_t l_92 = 0x3F497EEEL;
        int32_t l_93[3][2];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_93[i][j] = 0L;
        }
        for (l_72 = 0; (l_72 > (-28)); l_72--)
        { 
            l_78--;
        }
        l_93[2][0] = (((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(l_78, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((((l_91 , ((l_92 = g_67.f0) < ((((((0x5D12L | 0xD49FL) <= p_29.f0) | p_29.f1) <= g_43[0][2]) <= g_67.f1) >= 0UL))) | l_91.f1) != l_71), l_71)), 13)))) != l_71), p_29.f0)), 0x78F01456L)) != p_31.f0) >= p_29.f1);
    }
    for (p_31.f0 = 0; (p_31.f0 == 3); p_31.f0++)
    { 
        int64_t l_105 = 0xC6936EE37768238ALL;
        int32_t l_106 = (-3L);
        uint32_t l_107[1];
        int32_t l_166 = 7L;
        int i;
        for (i = 0; i < 1; i++)
            l_107[i] = 5UL;
        if ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(((l_105 = (p_29.f0 > (safe_mul_func_uint8_t_u_u(((((+p_31.f1) , (l_71 = g_67.f0)) == 0x9AL) ^ l_70), g_67.f1)))) > l_106), p_29.f0)), l_70)) >= l_106), l_107[0])))
        { 
            int32_t l_116 = 3L;
            uint8_t l_124 = 0xC1L;
            for (l_71 = 0; (l_71 < (-15)); l_71 = safe_sub_func_uint32_t_u_u(l_71, 7))
            { 
                int32_t l_125 = (-5L);
                g_126 = ((safe_sub_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((l_116 || (~p_29.f1)) , (((g_42 = ((((safe_mod_func_int64_t_s_s((((safe_div_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(l_116, 1UL)) > p_30), p_30)) >= g_42) || g_43[0][2]), p_31.f1)) || l_124) != p_31.f0) == g_10)) > p_31.f1) && 0x2CDE8027L)), l_116)), l_71)) == p_30) <= p_31.f0) ^ 0x62E1L), l_125)) , 0x97F7B615L);
                g_42 &= l_107[0];
                g_42 &= ((p_29.f0 , ((((safe_rshift_func_int8_t_s_u(0L, (safe_add_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((0xACL & (248UL ^ 0xAFL)), l_71)) == g_10), 3)), p_31.f0)) || l_106) <= g_126), p_31.f0)))) == p_30) != p_31.f1) != 0x43F1B082L)) == 0x879AL);
            }
        }
        else
        { 
            uint64_t l_150[3];
            int32_t l_151 = (-7L);
            int i;
            for (i = 0; i < 3; i++)
                l_150[i] = 0xCB1E5577DD4330F1LL;
            if ((l_107[0] < g_43[2][0]))
            { 
                if (g_42)
                    goto lbl_137;
            }
            else
            { 
                if (p_29.f1)
                    break;
                if (g_42)
                    break;
                g_42 = ((g_42 , ((l_138 , (safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0xF8A9L, 0)) > g_10), p_31.f1)), g_65))) != 0xDFB35854L)) <= 0xBF5FED85L);
            }
            l_70 = (g_42 == (((+(safe_lshift_func_uint8_t_u_u(((p_31 , ((safe_sub_func_uint32_t_u_u(p_31.f1, p_31.f1)) ^ g_67.f0)) && l_150[2]), 0))) <= 0UL) > g_67.f0));
            l_70 |= (p_29.f1 >= ((l_151 = l_138.f1) | (safe_rshift_func_int8_t_s_u(0xE3L, 4))));
        }
        if ((g_42 = (((g_154 >= ((0L <= 250UL) ^ ((((safe_rshift_func_int8_t_s_s((l_69 || p_29.f0), 5)) > l_138.f1) > g_43[0][2]) == 1UL))) || 0x6AC36B57L) | g_65)))
        { 
            uint8_t l_161 = 0x01L;
            int32_t l_162 = 1L;
            int32_t l_163[3][5];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                    l_163[i][j] = 2L;
            }
            l_163[2][0] &= (l_162 = (((p_31.f1 >= (1UL ^ l_107[0])) , ((safe_sub_func_uint32_t_u_u((((((safe_sub_func_int8_t_s_s(0x05L, l_107[0])) && 0x96L) < g_65) != g_42) && l_161), 7UL)) , l_69)) && l_107[0]));
            for (l_69 = (-11); (l_69 != (-25)); l_69 = safe_sub_func_uint8_t_u_u(l_69, 2))
            { 
                g_168--;
            }
        }
        else
        { 
            int64_t l_177 = 1L;
            l_166 = ((0x7AFFF8E30321B0A3LL | ((safe_rshift_func_uint8_t_u_u(l_107[0], ((++g_168) , ((safe_rshift_func_uint16_t_u_s(l_177, (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint64_t_u_u((l_177 | g_167), 18446744073709551615UL)) ^ 3UL), 6)))), 4)))) != g_65)))) < l_177)) <= l_177);
            if (l_72)
                goto lbl_185;
            if (p_31.f0)
                goto lbl_185;
        }
    }
    return l_186;
}



static struct S1  func_32(uint8_t  p_33, uint8_t  p_34)
{ 
    uint32_t l_49 = 1UL;
    struct S1 l_64 = {0x03240613L,0x443CL,{0xF34FA629L}};
    int32_t l_66 = 4L;
    g_42 &= (safe_mul_func_uint8_t_u_u((((65532UL ^ 0x008DL) , (g_43[0][1] <= (((p_34 & p_34) < l_49) > l_49))) ^ p_34), 0xE9L));
    l_66 = (g_43[1][2] < (safe_sub_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((g_65 = ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(0xFD5D1AFCL, (+(safe_mul_func_int16_t_s_s(((+g_42) && ((((l_64 , g_43[0][1]) , g_42) > l_64.f0) < p_33)), p_33))))), 0L)) , 0xAF8A8FF013EC5CB5LL)), g_10)) ^ l_64.f2.f0), l_64.f2.f0)));
    return l_64;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_43[i][j], "g_43[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f1, "g_67.f1", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    transparent_crc(g_227.f2, "g_227.f2", print_hash_value);
    transparent_crc(g_227.f3, "g_227.f3", print_hash_value);
    transparent_crc(g_227.f4, "g_227.f4", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
