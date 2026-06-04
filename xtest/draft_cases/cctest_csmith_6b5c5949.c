// SPDX-License-Identifier: MIT
// cctest_csmith_6b5c5949.c --- cctest case csmith_6b5c5949 (csmith seed 1801214281)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x35b3c679 */
/* @exp_ticks 0x5f4 */

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

// Options:   -s 1801214281 -o /home/agent1/fast_data/tmp/csmith_gen_6kfvkxxy/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint16_t  f1;
   uint16_t  f2;
   uint16_t  f3;
};

union U1 {
   const int8_t  f0;
   const int32_t  f1;
};


static int8_t g_4 = 1L;
static uint64_t g_5[2] = {0x4AA0D72276B87D0FLL,0x4AA0D72276B87D0FLL};
static int64_t g_11 = 0x849B76EEA53061ECLL;
static uint32_t g_31 = 18446744073709551615UL;
static int16_t g_43 = (-3L);
static int32_t g_54 = (-1L);
static uint8_t g_55 = 0UL;
static struct S0 g_72 = {0x31C11D73L,65535UL,65535UL,0x669DL};
static uint32_t g_84 = 0xE979E0FDL;
static union U1 g_96 = {0x02L};
static int64_t g_128 = 5L;
static int32_t g_130 = 0xB7CC70ECL;
static int32_t g_132 = 1L;
static int64_t g_133[3] = {0x8CFEE4E9FC46A622LL,0x8CFEE4E9FC46A622LL,0x8CFEE4E9FC46A622LL};
static int32_t g_135 = 0x9E7EE7FCL;
static int32_t g_136 = 0xEE36A709L;
static int8_t g_137 = 0xC5L;
static int16_t g_138 = 0L;
static uint32_t g_139 = 0x35786DE4L;
static int64_t g_190 = 8L;
static int16_t g_191 = (-1L);
static int32_t g_193 = 0xF3710615L;
static uint32_t g_194 = 0x5887891BL;
static struct S0 g_199 = {0xD9A228B1L,0x3848L,65533UL,1UL};
static uint32_t g_222[2][2][3] = {{{0xF5C7022BL,0xF5C7022BL,0xF5C7022BL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL}},{{0xF5C7022BL,0xF5C7022BL,0xF5C7022BL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL}}};
static uint32_t g_363[1] = {0x03292C47L};
static uint16_t g_368 = 1UL;



static int16_t  func_1(void);
static uint8_t  func_18(uint32_t  p_19, const int16_t  p_20, uint64_t  p_21, uint16_t  p_22);
static uint32_t  func_23(uint32_t  p_24, uint32_t  p_25, uint32_t  p_26, uint64_t  p_27, uint8_t  p_28);
static struct S0  func_39(int64_t  p_40, uint32_t  p_41, uint64_t  p_42);




static int16_t  func_1(void)
{ 
    int8_t l_2 = 0xCCL;
    int32_t l_3[4] = {0xCD53BC6EL,0xCD53BC6EL,0xCD53BC6EL,0xCD53BC6EL};
    uint32_t l_10 = 4294967287UL;
    int32_t l_367[4];
    int i;
    for (i = 0; i < 4; i++)
        l_367[i] = 0xC4E38E7CL;
    ++g_5[0];
    for (l_2 = 0; (l_2 != (-22)); --l_2)
    { 
        return l_10;
    }
    g_368 |= ((g_11 < (g_5[0] , (safe_sub_func_int8_t_s_s((g_5[1] , (safe_sub_func_int64_t_s_s((((l_367[2] = (l_3[1] = (((safe_add_func_uint8_t_u_u(func_18(func_23((l_3[3] |= l_2), l_2, l_10, g_5[0], g_11), l_10, l_2, l_2), g_190)) ^ 0x8D94L) || l_10))) , g_72) , l_367[2]), g_135))), l_2)))) , g_194);
    return g_128;
}



static uint8_t  func_18(uint32_t  p_19, const int16_t  p_20, uint64_t  p_21, uint16_t  p_22)
{ 
    int32_t l_241[2];
    int32_t l_259 = 0x37B7EF6DL;
    int64_t l_280 = 0xC168BAD667D22A03LL;
    uint32_t l_310[1];
    uint64_t l_318 = 18446744073709551615UL;
    int16_t l_323 = 1L;
    int8_t l_324 = 1L;
    int16_t l_339 = 6L;
    int32_t l_340 = 0L;
    int64_t l_356[3][4][5] = {{{0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL},{0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL},{0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL},{0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL}},{{0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL},{0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL},{0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL},{0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL}},{{0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL},{0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL},{0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL,0x3C3B65879E4AB8E7LL},{0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL,0x65BEB9DF2DC09E04LL,0x513A6BB28620D92ALL}}};
    int16_t l_357 = (-1L);
    int32_t l_362[5][2] = {{0xBE0326B2L,0xBE0326B2L},{0xBE0326B2L,0xBE0326B2L},{0xBE0326B2L,0xBE0326B2L},{0xBE0326B2L,0xBE0326B2L},{0xBE0326B2L,0xBE0326B2L}};
    uint8_t l_366 = 250UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_241[i] = 0x449ACB2FL;
    for (i = 0; i < 1; i++)
        l_310[i] = 0x428834A9L;
    if ((l_241[0] && ((~((l_259 &= ((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((g_191 &= (((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(g_31, (g_194 || (0x4591L != g_4)))), l_241[0])), 0x1EE0L)), p_20)), l_241[0])) & g_135) <= g_199.f1)), p_19)), g_54)) , p_22), 0x0C033148L)) >= l_241[0])) && 0xCD1CL)) == l_241[0])))
    { 
        int8_t l_260[3];
        struct S0 l_261 = {18446744073709551615UL,0UL,0xACA8L,0xFA4AL};
        int8_t l_266 = 0L;
        int32_t l_267 = 1L;
        int32_t l_296[2];
        uint32_t l_297 = 0xF08DCBE9L;
        int i;
        for (i = 0; i < 3; i++)
            l_260[i] = 1L;
        for (i = 0; i < 2; i++)
            l_296[i] = (-9L);
        l_260[1] = 7L;
        g_199 = l_261;
        if (((l_267 = (((p_20 || p_19) || ((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s(0x821ADE7DC1E71E30LL, (g_132 < p_19))), g_96.f0)) || p_20)) || l_266)) <= p_20))
        { 
            uint16_t l_268 = 9UL;
            uint32_t l_279 = 7UL;
            int32_t l_281[2];
            int i;
            for (i = 0; i < 2; i++)
                l_281[i] = 0L;
            if ((l_281[1] = ((--l_268) > (safe_mod_func_int32_t_s_s((l_241[0] != ((g_138 <= (l_280 = (safe_lshift_func_int16_t_s_u((l_267 = ((safe_sub_func_uint32_t_u_u((l_279 >= (g_222[1][0][2] >= 0x97L)), 0UL)) < g_130)), 2)))) >= g_5[0])), g_54)))))
            { 
                uint16_t l_282 = 0xBBF4L;
                l_282++;
            }
            else
            { 
                return l_241[0];
            }
        }
        else
        { 
            int8_t l_294 = 0x9DL;
            int32_t l_295[1][3][3] = {{{0xE715459EL,(-8L),(-8L)},{0xE715459EL,(-8L),(-8L)},{0xE715459EL,(-8L),(-8L)}}};
            int i, j, k;
            l_295[0][0][1] = ((l_259 = (((p_19 = g_72.f2) <= (l_294 = (l_267 ^= ((((~(safe_lshift_func_int16_t_s_u(((g_138 = 1L) | (safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(g_72.f2, (((((((safe_mul_func_uint8_t_u_u(p_20, p_21)) > 0xA9FDFB362DC111D2LL) < 9L) < g_199.f1) != 18446744073709551614UL) > p_21) , g_54))) == l_261.f2), 6))), p_22))) , l_259) , 0xEC09L) <= p_20)))) || p_19)) & p_21);
            if (g_72.f2)
                goto lbl_301;
            ++l_297;
        }
    }
    else
    { 
lbl_301:
        for (g_199.f0 = 0; (g_199.f0 <= 1); g_199.f0 += 1)
        { 
            int16_t l_300[1][5][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_300[i][j][k] = 0x53A1L;
                }
            }
            for (g_136 = 1; (g_136 >= 0); g_136 -= 1)
            { 
                return l_300[0][3][1];
            }
            for (g_72.f1 = 0; (g_72.f1 <= 1); g_72.f1 += 1)
            { 
                return p_22;
            }
            for (p_21 = 0; (p_21 <= 1); p_21 += 1)
            { 
                if (g_194)
                    break;
            }
        }
        if (g_84)
        { 
            uint32_t l_325[4] = {4294967291UL,4294967291UL,4294967291UL,4294967291UL};
            int32_t l_327[3][1][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_327[i][j][k] = 0x68774B25L;
                }
            }
            if ((l_325[2] |= (+((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((~l_310[0]) ^ (safe_add_func_int8_t_s_s((+(safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_318, (safe_rshift_func_int16_t_s_s(p_20, (safe_lshift_func_int16_t_s_u(g_72.f3, l_323)))))), l_310[0]))), p_20))), l_324)) == p_22) & g_72.f1), g_5[1])), 1L)) , 4294967294UL))))
            { 
                struct S0 l_326 = {0x8511FF11L,0x8785L,65532UL,0UL};
                if (g_132)
                    goto lbl_301;
                l_326 = g_72;
                g_54 = (l_327[0][0][0] = (-1L));
            }
            else
            { 
                uint32_t l_332 = 0x18A4ECF5L;
                int32_t l_341[1];
                struct S0 l_358 = {18446744073709551615UL,0x2738L,0x6467L,65535UL};
                int i;
                for (i = 0; i < 1; i++)
                    l_341[i] = (-6L);
                l_340 &= ((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_332, (((p_21 >= ((safe_sub_func_int64_t_s_s((-8L), (((((safe_sub_func_uint32_t_u_u((l_339 = (((safe_sub_func_uint32_t_u_u(0x1474B092L, 0xD09E0FE8L)) != l_325[1]) >= g_72.f0)), p_19)) , p_20) != (-6L)) < g_199.f3) || 0xEF0DABAFL))) == l_332)) ^ p_19) , p_19))), 2)) == g_54);
                l_341[0] = 0x479D718FL;
                l_358 = func_39((l_357 = ((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((g_190 < ((safe_sub_func_int16_t_s_s((0x05L < (((safe_mod_func_int64_t_s_s((4294967294UL > (l_327[2][0][0] = (((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_280, l_241[1])), g_199.f0)) >= 255UL) ^ g_137))), l_356[2][1][2])) <= 0L) || l_325[2])), p_21)) >= 0UL)) && 0x31L), l_310[0])) && 1UL), l_340)) , (-9L))), g_199.f0, g_199.f1);
            }
        }
        else
        { 
            int64_t l_359[4];
            int32_t l_360 = 0x53696BEFL;
            int32_t l_361 = 0xBA1C151AL;
            int i;
            for (i = 0; i < 4; i++)
                l_359[i] = 9L;
            g_363[0]++;
        }
    }
    return l_366;
}



static uint32_t  func_23(uint32_t  p_24, uint32_t  p_25, uint32_t  p_26, uint64_t  p_27, uint8_t  p_28)
{ 
    uint32_t l_29 = 4294967295UL;
    int32_t l_30[5][5][1] = {{{0x02E63372L},{7L},{(-1L)},{7L},{0x02E63372L}},{{7L},{(-1L)},{7L},{0x02E63372L},{7L}},{{(-1L)},{7L},{0x02E63372L},{7L},{(-1L)}},{{7L},{0x02E63372L},{7L},{(-1L)},{7L}},{{0x02E63372L},{7L},{(-1L)},{7L},{0x02E63372L}}};
    uint32_t l_240[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_240[i] = 1UL;
    l_30[0][2][0] = (l_29 == (g_31++));
    l_240[0] = (safe_mul_func_uint8_t_u_u((+(-1L)), ((g_11 ^ ((safe_sub_func_int32_t_s_s((l_30[0][2][0] = (((0xED050B7FL & (func_39(g_43, l_30[0][2][0], g_31) , l_30[0][2][0])) , l_30[3][3][0]) >= 0x96L)), 0xB2804DBBL)) , 0x1AL)) & p_24)));
    return l_29;
}



static struct S0  func_39(int64_t  p_40, uint32_t  p_41, uint64_t  p_42)
{ 
    uint16_t l_44[4][2][4] = {{{0xDA84L,65529UL,8UL,8UL},{0x9553L,0x9553L,0xDA84L,8UL}},{{0UL,65529UL,0UL,0xDA84L},{0UL,0xDA84L,0xDA84L,0UL}},{{0x9553L,0xDA84L,8UL,0xDA84L},{0xDA84L,65529UL,8UL,8UL}},{{0x9553L,0x9553L,0xDA84L,8UL},{0UL,65529UL,0UL,0xDA84L}}};
    int32_t l_51 = 3L;
    int32_t l_131 = (-1L);
    uint8_t l_160 = 0x12L;
    int8_t l_234 = 8L;
    struct S0 l_239 = {5UL,0x7C1CL,0x0E78L,65528UL};
    int i, j, k;
lbl_71:
    --l_44[0][1][2];
    for (p_40 = 1; (p_40 >= 0); p_40 -= 1)
    { 
        int8_t l_52[4][5][5] = {{{0x4BL,0x40L,0x4BL,(-1L),0x40L},{0L,(-1L),0xBAL,(-1L),0xBAL},{0x80L,0x80L,0x18L,0x40L,(-6L)},{0L,0x6CL,0xBAL,0x07L,0x9CL},{(-6L),0x00L,0x4BL,(-6L),(-1L)}},{{0x1DL,0x6CL,0x83L,0x6CL,0x1DL},{0x4BL,0x80L,0x00L,(-1L),0x80L},{0x1DL,(-1L),(-1L),0x38L,0xBAL},{(-6L),0x40L,0x18L,0x80L,0x80L},{0L,0x38L,0L,0x07L,0x1DL}},{{0x80L,0x00L,(-1L),0x80L,(-1L)},{0L,(-1L),0x83L,0x38L,0x9CL},{0x4BL,(-6L),(-1L),(-1L),(-6L)},{0x9CL,(-1L),0L,0x6CL,0xBAL},{0x40L,(-6L),0x18L,(-6L),0x40L}},{{0x6AL,0x98L,0x83L,0x31L,0L},{0x00L,0x18L,0x18L,0x00L,0xBEL},{0xBAL,(-1L),0L,0x98L,0L},{3L,0x00L,3L,0xBEL,0x00L},{0L,0x46L,0xA7L,0x98L,0xA7L}}};
        int32_t l_53 = (-4L);
        struct S0 l_73 = {0x4E46196CL,7UL,0xE765L,1UL};
        int32_t l_82 = 1L;
        int32_t l_129 = 0xB33B0C63L;
        int32_t l_134 = (-3L);
        int i, j, k;
        for (g_31 = 0; (g_31 <= 1); g_31 += 1)
        { 
            for (p_41 = 0; (p_41 <= 1); p_41 += 1)
            { 
                int32_t l_70 = (-1L);
                int i, j, k;
                l_70 = ((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((l_53 = (++g_55)), l_44[(p_40 + 2)][g_31][(g_31 + 1)])) , (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((l_44[(p_40 + 2)][g_31][(g_31 + 1)] == (safe_mul_func_int16_t_s_s(g_11, (safe_rshift_func_uint8_t_u_u(248UL, p_40))))), 15)), p_41)), p_42)) , l_44[(p_40 + 2)][g_31][(g_31 + 1)]), 0x4BB84A8AL))), g_54)) < p_42) , p_42) == p_42);
                if (p_42)
                    goto lbl_71;
                l_73 = g_72;
            }
            for (g_4 = 1; (g_4 >= 0); g_4 -= 1)
            { 
                g_54 = 0x071CE904L;
                g_54 &= (g_72.f3 | (0x73L ^ p_42));
            }
        }
        if ((((safe_add_func_int32_t_s_s(0xD8725687L, l_73.f2)) < 9L) && ((l_53 = (safe_rshift_func_uint16_t_u_s(p_40, 9))) > (-1L))))
        { 
            uint8_t l_97 = 0x5FL;
            for (g_72.f3 = 0; (g_72.f3 <= 1); g_72.f3 += 1)
            { 
                int16_t l_80[4][2][3] = {{{0L,0L,0L},{(-1L),(-1L),(-1L)}},{{0L,0L,0L},{(-1L),(-1L),(-1L)}},{{0L,0L,0L},{(-1L),(-1L),(-1L)}},{{0L,0L,0L},{(-1L),(-1L),(-1L)}}};
                int32_t l_81 = 0x6DE0D780L;
                int32_t l_83 = (-1L);
                int i, j, k;
                g_54 &= ((-1L) | ((g_43 <= 0UL) > ((safe_div_func_uint64_t_u_u((0xF4L != 0x01L), 1L)) >= 0xDB64L)));
                g_84--;
            }
            if (g_31)
                goto lbl_71;
            if ((l_51 ^= p_42))
            { 
                g_54 = p_41;
                l_82 &= ((1UL == p_41) , (safe_div_func_uint32_t_u_u(1UL, l_73.f1)));
            }
            else
            { 
                int8_t l_95 = 0x0BL;
                int i;
                l_97 &= (safe_sub_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u(l_95, 1)) >= (0xA5446388L < (g_11 || (g_5[p_40] = (g_96 , p_41))))) , 0x8F130343879702F8LL) >= g_72.f1), 0x21L)) < g_72.f2) >= 0UL), l_82));
                if (g_55)
                    goto lbl_71;
                l_73 = l_73;
            }
        }
        else
        { 
            int16_t l_108 = 0xD361L;
            int32_t l_121 = 0xA80421A5L;
            struct S0 l_124 = {18446744073709551612UL,65535UL,0UL,0x666FL};
            if (((safe_rshift_func_uint16_t_u_s((((l_121 = ((safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(0xC67FL, (g_55 || ((((g_55 = ((l_108 <= ((((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(((l_51 = (safe_sub_func_int64_t_s_s(((p_41 == 18446744073709551615UL) && g_4), 0xAB4704B525832669LL))) == g_84), g_72.f2)) == p_40), g_11)) ^ 0xE49B9DBF79CE2C80LL), g_4)), 2)), g_31)) >= l_108) & 0xF9L) | 0L)) , 1UL)) & (-8L)) < g_11) & 0UL)))), p_41)), g_96.f0)) && p_41), l_108)) > g_54)) | 0UL) <= l_44[1][0][2]), l_73.f0)) | g_5[0]))
            { 
                struct S0 l_122 = {18446744073709551615UL,0x4971L,1UL,0x5F6DL};
                return l_122;
            }
            else
            { 
                l_53 = (safe_unary_minus_func_int16_t_s(0xF030L));
                if (g_72.f3)
                    break;
                l_124 = g_72;
            }
            if (l_53)
                continue;
        }
        for (g_72.f3 = 0; (g_72.f3 <= 1); g_72.f3 += 1)
        { 
            int32_t l_125 = (-1L);
            int8_t l_126 = 0L;
            int32_t l_127[5];
            int i;
            for (i = 0; i < 5; i++)
                l_127[i] = 0L;
            g_139++;
            if (((safe_mod_func_int8_t_s_s(p_41, (g_96.f0 ^ (g_55 ^ (safe_rshift_func_int8_t_s_u((((safe_sub_func_uint32_t_u_u(g_128, g_5[0])) , 0x78CCL) & (-4L)), l_131)))))) || 0UL))
            { 
                uint32_t l_150 = 0x6F84042AL;
                l_150--;
            }
            else
            { 
                int32_t l_157 = 0xE6391751L;
                l_157 = (g_135 , ((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(g_5[0], 4)) && 0x9183L), 1L)) != 0xA0F79982L));
                if (l_73.f2)
                    goto lbl_71;
            }
            for (l_51 = 1; (l_51 >= 0); l_51 -= 1)
            { 
                l_127[2] = g_72.f1;
            }
        }
    }
    for (g_72.f2 = 0; (g_72.f2 <= 1); g_72.f2 += 1)
    { 
        uint64_t l_170 = 0x945631F00607BE1BLL;
        int32_t l_171 = 0xB35E0E55L;
        struct S0 l_198 = {0x4F35B7F5L,65535UL,0x1989L,0x6024L};
        int32_t l_218 = 0xA7A22F57L;
        int32_t l_220 = 1L;
        int32_t l_221 = (-9L);
        if (((l_160 && (((g_138 != (((safe_add_func_int32_t_s_s((l_171 |= (safe_div_func_uint64_t_u_u((+(0xDDL && (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((g_96 , g_72.f2), 4294967295UL)) ^ l_170), 0L)))), 0xE21F7CBC24AECF75LL))), l_44[0][1][2])) != g_133[0]) & l_170)) ^ g_72.f0) != 0UL)) , p_41))
        { 
            g_130 = ((safe_add_func_uint8_t_u_u(((1L ^ p_42) == (l_171 = p_42)), (g_138 | 18446744073709551615UL))) || g_138);
            l_171 |= (g_138 < 251UL);
            g_130 = (safe_mul_func_uint16_t_u_u(p_40, (safe_div_func_uint32_t_u_u(p_42, (l_131 &= (l_51 &= (((g_54 & ((((safe_mod_func_uint32_t_u_u(l_44[0][1][2], g_72.f2)) > g_138) <= g_137) && 1L)) ^ 2UL) != 0L)))))));
        }
        else
        { 
            uint32_t l_184 = 0x0575CF62L;
            struct S0 l_186 = {0UL,0xDD7EL,0x9005L,65533UL};
            int32_t l_187 = 0xF8ADBACCL;
            int32_t l_188 = 0xDB6E0624L;
            int32_t l_189 = 0L;
            int32_t l_192 = 4L;
            for (g_54 = 1; (g_54 >= 0); g_54 -= 1)
            { 
                int64_t l_183[4][1];
                struct S0 l_185 = {0xCB4BFE13L,0xD652L,0xC083L,0x2772L};
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_183[i][j] = 0x95ED4DF38324C050LL;
                }
                g_136 = (safe_mul_func_int16_t_s_s((l_131 > (((((65531UL < (l_183[0][0] = (+(-1L)))) || ((l_184 ^ 0xFBL) && 0xDC60C70BL)) >= 4294967291UL) , g_133[0]) & l_170)), 0x2FBBL));
                if (p_40)
                    break;
                l_186 = l_185;
            }
            g_136 |= g_55;
            for (g_54 = 2; (g_54 >= 0); g_54 -= 1)
            { 
                uint8_t l_197 = 252UL;
                l_51 = l_44[0][1][2];
                g_194++;
                if (l_197)
                    break;
            }
        }
        g_199 = l_198;
        for (g_193 = 0; (g_193 <= 1); g_193 += 1)
        { 
            int32_t l_216[3][3][5] = {{{0xE45CAA37L,(-1L),(-1L),(-1L),0xE45CAA37L},{0xB5ABC4B9L,0x9AB8218DL,(-8L),0x26FC9A26L,0x9AB8218DL},{0xE45CAA37L,(-8L),(-8L),0xE45CAA37L,0x26FC9A26L}},{{(-1L),0xE45CAA37L,(-1L),0x9AB8218DL,0x9AB8218DL},{0xB5ABC4B9L,0xE45CAA37L,0xB5ABC4B9L,0x26FC9A26L,0xE45CAA37L},{0x9AB8218DL,(-8L),0x26FC9A26L,0x9AB8218DL,0x26FC9A26L}},{{0x9AB8218DL,0x9AB8218DL,(-1L),0xE45CAA37L,(-1L)},{0xB5ABC4B9L,(-1L),0x26FC9A26L,0x26FC9A26L,(-1L)},{(-1L),(-8L),0xB5ABC4B9L,(-1L),0x26FC9A26L}}};
            int32_t l_217 = 5L;
            int64_t l_219 = 0x85E07166BAD0E2BELL;
            int32_t l_235 = 0x2710EF8BL;
            int i, j, k;
            g_136 &= (safe_mul_func_int8_t_s_s((g_137 = (p_42 > (p_42 , 4294967295UL))), (((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(((((g_43 , p_42) || p_41) == l_198.f0) >= 0x587CEBA9L), l_131)) > g_133[0]), l_160)) >= 247UL) , g_199.f2)));
            l_217 = (safe_lshift_func_int16_t_s_u((g_72.f1 != (safe_sub_func_int16_t_s_s(((((safe_div_func_uint16_t_u_u(l_198.f1, 0x6DB2L)) , ((safe_mod_func_int32_t_s_s((((safe_sub_func_uint64_t_u_u(0UL, 0UL)) || l_216[2][2][2]) && g_191), g_84)) == p_40)) >= p_42) , g_72.f0), l_198.f1))), g_137));
            g_222[0][1][1]++;
            for (g_43 = 0; (g_43 <= 1); g_43 += 1)
            { 
                uint16_t l_238 = 0x045EL;
                l_235 = ((+(l_217 = (safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(0x5408L, ((l_198.f2 > l_217) , (safe_add_func_uint64_t_u_u(l_234, g_72.f1))))) && 0x71C5A3C14F001BC3LL), g_191)), (-1L))))) == g_199.f3);
                g_54 = l_44[1][0][1];
                l_51 = ((safe_lshift_func_uint16_t_u_s(l_170, (l_238 = 7L))) != g_199.f2);
            }
        }
    }
    return l_239;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);

    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_199.f0, "g_199.f0", print_hash_value);
    transparent_crc(g_199.f1, "g_199.f1", print_hash_value);
    transparent_crc(g_199.f2, "g_199.f2", print_hash_value);
    transparent_crc(g_199.f3, "g_199.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_222[i][j][k], "g_222[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_363[i], "g_363[i]", print_hash_value);

    }
    transparent_crc(g_368, "g_368", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
