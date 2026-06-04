// SPDX-License-Identifier: MIT
// cctest_csmith_e25073f7.c --- cctest case csmith_e25073f7 (csmith seed 3796923383)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfa9d05f7 */
/* @exp_ticks 0x731 */

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

// Options:   -s 3796923383 -o /home/agent1/fast_data/tmp/csmith_gen_2rne5gt_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint16_t  f1;
   uint8_t  f2;
   int32_t  f3;
   const int32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   int8_t  f1;
   int8_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int64_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   uint8_t  f0;
   const struct S1  f1;
   const uint32_t  f2;
   uint64_t  f3;
};
#pragma pack(pop)

union U4 {
   const struct S2  f0;
};


static int32_t g_2[3][3][1] = {{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}}};
static uint8_t g_7 = 0x3AL;
static union U4 g_30 = {{8L}};
static uint64_t g_32 = 18446744073709551615UL;
static struct S3 g_33 = {0x58L,{0x87662B0AL,0x4FL,0x87L,18446744073709551606UL},0UL,18446744073709551613UL};
static int32_t g_76 = 0x0DDAD4DBL;
static struct S2 g_147 = {0x6CDF1D218BD48E63LL};
static int64_t g_174 = (-1L);



static uint32_t  func_1(void);
static uint32_t  func_10(const struct S2  p_11, struct S1  p_12);
static struct S2  func_13(int32_t  p_14, uint64_t  p_15);
static uint64_t  func_16(const uint16_t  p_17, int8_t  p_18, struct S3  p_19, int8_t  p_20, uint64_t  p_21);




static uint32_t  func_1(void)
{ 
    uint8_t l_6 = 8UL;
    int32_t l_31[3][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x76DF3E2EL,0x76DF3E2EL,0x76DF3E2EL,0x76DF3E2EL,0x76DF3E2EL},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
    struct S1 l_149 = {-1L,1L,0L,1UL};
    int i, j;
    for (g_2[0][2][0] = 0; (g_2[0][2][0] != 15); ++g_2[0][2][0])
    { 
        uint16_t l_5 = 0xCBCEL;
        g_7 |= (l_6 ^= l_5);
    }
    g_2[0][2][0] = (safe_mod_func_uint64_t_u_u(0UL, ((func_10(func_13(g_7, func_16(((g_7 > (safe_add_func_uint8_t_u_u((l_31[1][1] |= (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((g_30 , g_7) <= 0xA0CEL), g_2[2][1][0])), 11)), 0x19B885B3D925D3C0LL))), l_6))) & g_32), g_7, g_33, g_33.f1.f0, g_33.f0)), l_149) , 1L) && l_149.f0)));
    g_2[0][2][0] |= (safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(l_149.f3, g_33.f1.f0)), (safe_sub_func_uint8_t_u_u((((l_6 <= (0x185FL ^ 0xC621L)) ^ l_6) >= 0xF7B9C6B3823A47D3LL), g_33.f2))));
    return g_33.f3;
}



static uint32_t  func_10(const struct S2  p_11, struct S1  p_12)
{ 
    uint16_t l_164 = 0x9923L;
    uint64_t l_169 = 18446744073709551613UL;
    int32_t l_175 = 0xC49AC2DAL;
    struct S2 l_176 = {0x719B2E0BA896EA0DLL};
    for (p_12.f1 = (-25); (p_12.f1 > (-19)); p_12.f1 = safe_add_func_uint32_t_u_u(p_12.f1, 5))
    { 
        int32_t l_160 = 6L;
        int32_t l_165 = 0xE818DDB1L;
        l_165 ^= ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((l_160 == (l_164 &= (safe_mul_func_uint16_t_u_u((!p_12.f2), g_33.f2)))), 4)) && (g_30.f0.f0 | 0UL)) || p_12.f0), p_12.f2)), 0xDE0EBD96L)), 7)) == g_30.f0.f0);
        for (g_32 = 18; (g_32 == 20); g_32++)
        { 
            int8_t l_168 = 0xF8L;
            l_169++;
        }
        g_2[0][0][0] = (safe_mod_func_int64_t_s_s(((((g_174 = l_169) != g_147.f0) != (p_11 , (l_175 = l_169))) , p_12.f1), g_7));
    }
    l_176 = g_147;
    return p_12.f1;
}



static struct S2  func_13(int32_t  p_14, uint64_t  p_15)
{ 
    int32_t l_78 = (-6L);
    const uint32_t l_96[1] = {0UL};
    struct S0 l_105 = {0x687E89A4L,1UL,0xBFL,-10L,0L};
    struct S1 l_108 = {0L,0xB3L,0xCDL,0UL};
    int8_t l_118 = 0x47L;
    const int16_t l_131[1] = {0x64AFL};
    struct S2 l_148 = {0xA44B56EB578CF177LL};
    int i;
    p_14 &= (l_78 | ((++p_15) || p_15));
    p_14 = (safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((!g_30.f0.f0) >= ((((safe_lshift_func_uint16_t_u_s(l_78, (safe_mod_func_uint64_t_u_u((l_78 > (((safe_add_func_int8_t_s_s((((l_78 < l_78) && 0x7BL) ^ 0x292BL), g_33.f0)) && 0x66L) >= l_96[0])), g_33.f2)))) && p_14) && 65535UL) != g_33.f2)), 4)), g_2[1][0][0])) <= p_15), 4));
    for (l_78 = 0; (l_78 >= 0); l_78 -= 1)
    { 
        const uint32_t l_106 = 0x5B7EE776L;
        struct S1 l_107[3][4] = {{{0x2E6F118EL,1L,0L,2UL},{1L,0xD0L,-1L,0xEA8FD6C6L},{1L,0xD0L,-1L,0xEA8FD6C6L},{0x2E6F118EL,1L,0L,2UL}},{{1L,0xD0L,-1L,0xEA8FD6C6L},{0x2E6F118EL,1L,0L,2UL},{1L,0xD0L,-1L,0xEA8FD6C6L},{1L,0xD0L,-1L,0xEA8FD6C6L}},{{0x2E6F118EL,1L,0L,2UL},{0x2E6F118EL,1L,0L,2UL},{6L,0x5AL,0L,0x29EC2202L},{0x2E6F118EL,1L,0L,2UL}}};
        uint32_t l_115 = 0x584D3EBCL;
        int i, j;
        for (g_32 = 0; g_32 < 3; g_32 += 1)
        {
            for (g_76 = 0; g_76 < 3; g_76 += 1)
            {
                for (p_15 = 0; p_15 < 1; p_15 += 1)
                {
                    g_2[g_32][g_76][p_15] = (-10L);
                }
            }
        }
        l_108 = ((safe_add_func_uint64_t_u_u((l_105.f3 = (safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_33 , 9L), 1UL)), ((l_105.f0 = ((((l_105 , p_14) >= p_15) < 18446744073709551613UL) == 3UL)) && l_106))) <= g_2[0][2][0]), g_2[0][2][0]))), 0xA71BB9DF8DAF57E0LL)) , l_107[2][2]);
        for (l_105.f2 = 0; (l_105.f2 <= 0); l_105.f2 += 1)
        { 
            uint32_t l_119 = 0UL;
            if ((l_119 = ((safe_add_func_int8_t_s_s(((l_108.f2 == ((safe_div_func_int64_t_s_s((((1L == (safe_mod_func_uint64_t_u_u(l_115, (safe_mul_func_uint16_t_u_u(l_118, 0xB465L))))) <= g_2[0][2][0]) < g_2[0][2][0]), (-5L))) | p_15)) >= (-2L)), 0xBAL)) , 4L)))
            { 
                if (g_32)
                    break;
            }
            else
            { 
                uint8_t l_130 = 246UL;
                l_130 ^= (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((p_14 == p_15), 0xEF2EL)), (safe_sub_func_int32_t_s_s(p_14, l_107[2][2].f0)))), p_15)), (-1L)));
            }
            if (l_131[0])
                break;
            for (g_33.f3 = 0; (g_33.f3 <= 0); g_33.f3 += 1)
            { 
                uint16_t l_132 = 0UL;
                struct S2 l_146 = {1L};
                int i, j, k;
                l_132 &= g_2[(l_105.f2 + 1)][(g_33.f3 + 1)][l_78];
                p_14 = 0L;
                g_147 = (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((!g_30.f0.f0), (safe_sub_func_int8_t_s_s((((18446744073709551615UL > l_119) , (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((g_7 | l_115), g_76)), 0))) , g_33.f1.f2), p_14)))), g_32)), g_33.f1.f2)) > g_2[1][1][0]) , l_146);
            }
        }
    }
    return l_148;
}



static uint64_t  func_16(const uint16_t  p_17, int8_t  p_18, struct S3  p_19, int8_t  p_20, uint64_t  p_21)
{ 
    uint8_t l_41 = 3UL;
    int32_t l_46 = 0x47D86C3CL;
    for (p_19.f3 = 2; (p_19.f3 > 42); p_19.f3++)
    { 
        int16_t l_40[4][4][2] = {{{(-2L),(-2L)},{(-2L),0x430FL},{(-2L),(-2L)},{(-2L),0x430FL}},{{(-2L),(-2L)},{(-2L),0x430FL},{(-2L),(-2L)},{(-2L),0x430FL}},{{(-2L),(-2L)},{(-2L),0x430FL},{(-2L),(-2L)},{(-2L),0x430FL}},{{(-2L),(-2L)},{(-2L),0x430FL},{(-2L),(-2L)},{(-2L),0x430FL}}};
        int32_t l_77[2][2][3] = {{{0xBFFD3208L,(-1L),(-1L)},{1L,(-1L),1L}},{{0x122BF4B2L,0xBFFD3208L,(-1L)},{0x122BF4B2L,0x122BF4B2L,0xBFFD3208L}}};
        int i, j, k;
        for (p_19.f0 = 0; (p_19.f0 <= 0); p_19.f0 += 1)
        { 
            uint64_t l_49 = 18446744073709551615UL;
            int32_t l_52 = 0x52C43DA4L;
            g_2[2][1][0] = ((p_19.f3 <= 0x8B2576953C535718LL) , (((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((l_41++), 1)) >= (0x00F8L & (safe_mul_func_uint16_t_u_u(((-1L) != g_2[0][2][0]), p_17)))), p_18)) , g_33.f1.f0) | g_33.f1.f1));
            for (p_20 = 0; (p_20 >= 0); p_20 -= 1)
            { 
                int i, j, k;
                l_46 &= g_2[(p_19.f0 + 2)][(p_20 + 1)][p_19.f0];
                l_52 ^= (l_49 | ((safe_sub_func_int64_t_s_s((-8L), (++p_21))) != p_19.f1.f3));
                if (g_33.f1.f1)
                    break;
            }
            g_2[2][2][0] = (l_77[1][0][1] = (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s(l_52, (((g_76 &= ((((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((p_20 = g_7) & (+g_33.f0)), ((((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(l_40[2][0][1], l_46)) , g_33.f1.f2), p_19.f2)), 255UL)), p_19.f0)) != 1UL) != 0xB5122599L) > 0x4DL))), 14)) || l_52) & 0x07L) && 1L)) ^ g_33.f1.f1) | p_19.f1.f3))), p_19.f2)), p_19.f1.f3)), l_40[3][2][1])));
        }
    }
    return g_30.f0.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_30.f0.f0, "g_30.f0.f0", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1.f0, "g_33.f1.f0", print_hash_value);
    transparent_crc(g_33.f1.f1, "g_33.f1.f1", print_hash_value);
    transparent_crc(g_33.f1.f2, "g_33.f1.f2", print_hash_value);
    transparent_crc(g_33.f1.f3, "g_33.f1.f3", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
