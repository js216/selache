// SPDX-License-Identifier: MIT
// cctest_csmith_7502a4f5.c --- cctest case csmith_7502a4f5 (csmith seed 1963107573)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x551dd8e3 */
/* @exp_ticks 0x33cd */

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

// Options:   -s 1963107573 -o /tmp/csmith_gen_kxo8u95d/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int32_t  f0;
   uint32_t  f1;
};

struct S1 {
   uint32_t  f0;
   uint64_t  f1;
   struct S0  f2;
   uint32_t  f3;
   uint32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)

union U3 {
   int8_t  f0;
   const struct S0  f1;
};


static int32_t g_2 = 0xD86E52D8L;
static int64_t g_5 = 0x6DB6D0374C7AF5AFLL;
static uint32_t g_19 = 5UL;
static uint16_t g_31 = 9UL;
static int8_t g_54 = 0x0FL;
static int32_t g_59[1] = {(-1L)};
static uint64_t g_68 = 0UL;
static int8_t g_82 = 1L;
static int32_t g_83 = 0xEC2B408DL;
static union U3 g_91 = {-4L};
static int8_t g_100 = 0xA9L;
static int8_t g_101 = (-1L);
static int32_t g_103 = (-1L);
static uint64_t g_105 = 18446744073709551615UL;
static int8_t g_119 = 0x5CL;
static struct S1 g_126 = {0x727C9044L,0x330A9AF7D07E14A3LL,{0x9480F4B2L,0UL},0xA7D0CF22L,9UL};
static struct S2 g_146 = {0x1FC70460L,1UL};



static uint8_t  func_1(void);
static uint8_t  func_14(uint32_t  p_15, const uint64_t  p_16);
static const struct S2  func_24(uint64_t  p_25, uint32_t  p_26, int8_t  p_27, int32_t  p_28, uint32_t  p_29);
static int8_t  func_41(uint32_t  p_42, uint8_t  p_43);




static uint8_t  func_1(void)
{ 
    const int32_t l_12 = 3L;
    int32_t l_147 = 0x5F59AB2AL;
    for (g_2 = 29; (g_2 > (-14)); --g_2)
    { 
        int32_t l_13[2][3];
        int32_t l_30 = 1L;
        struct S2 l_145[4][5][4] = {{{{1UL,0xBFFDL},{18446744073709551615UL,0UL},{0x69A13370L,7UL},{18446744073709551615UL,0UL}},{{18446744073709551615UL,0UL},{0x7F6879DCL,0xED44L},{0UL,65535UL},{0UL,6UL}},{{18446744073709551615UL,0x6133L},{1UL,0xBFFDL},{18446744073709551614UL,0xC8C6L},{0UL,65535UL}},{{18446744073709551606UL,0x27A7L},{18446744073709551613UL,9UL},{0x7FE76C90L,0UL},{18446744073709551615UL,0UL}},{{18446744073709551606UL,0x27A7L},{18446744073709551614UL,0xC8C6L},{18446744073709551614UL,0xC8C6L},{18446744073709551606UL,0x27A7L}}},{{{18446744073709551615UL,0x6133L},{18446744073709551615UL,0UL},{0UL,65535UL},{18446744073709551614UL,0xC8C6L}},{{18446744073709551615UL,0UL},{18446744073709551613UL,9UL},{0x69A13370L,7UL},{0UL,6UL}},{{1UL,0xBFFDL},{18446744073709551615UL,0x6133L},{18446744073709551614UL,0xC8C6L},{0UL,6UL}},{{8UL,0x69CAL},{18446744073709551613UL,9UL},{8UL,0x69CAL},{18446744073709551614UL,0xC8C6L}},{{18446744073709551606UL,0x27A7L},{18446744073709551615UL,0UL},{0x485AA36DL,0UL},{18446744073709551606UL,0x27A7L}}},{{{1UL,0xBFFDL},{18446744073709551614UL,0xC8C6L},{0UL,65535UL},{18446744073709551615UL,0UL}},{{18446744073709551614UL,0xC8C6L},{18446744073709551615UL,0x6133L},{0x1AA54D71L,0x7552L},{0x1AA54D71L,0x7552L}},{{18446744073709551614UL,0xC8C6L},{18446744073709551614UL,0xC8C6L},{18446744073709551606UL,0x27A7L},{0x7F6879DCL,0xED44L}},{{0UL,65535UL},{8UL,0xE60FL},{0x69A13370L,7UL},{8UL,0x69CAL}},{{0x69A13370L,7UL},{8UL,0x69CAL},{0x7FE76C90L,0UL},{0x69A13370L,7UL}}},{{{18446744073709551614UL,0xC8C6L},{8UL,0x69CAL},{18446744073709551613UL,9UL},{8UL,0x69CAL}},{{8UL,0x69CAL},{8UL,0xE60FL},{0x1AA54D71L,0x7552L},{0x7F6879DCL,0xED44L}},{{0x485AA36DL,0UL},{18446744073709551614UL,0xC8C6L},{0x7FE76C90L,0UL},{0x1AA54D71L,0x7552L}},{{0UL,65535UL},{18446744073709551615UL,0x6133L},{0UL,6UL},{8UL,0x69CAL}},{{0UL,65535UL},{0x7FE76C90L,0UL},{0x7FE76C90L,0UL},{0UL,65535UL}}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_13[i][j] = (-6L);
        }
        g_5 = g_2;
        if ((g_2 > (((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(0xE3L, (safe_mul_func_int16_t_s_s(l_12, g_5)))) , g_5), l_12)) | l_12) <= g_5) && g_2) | g_5)))
        { 
            uint32_t l_139 = 0xFB23EE19L;
            int32_t l_140 = (-1L);
            for (g_5 = 0; (g_5 <= 1); g_5 += 1)
            { 
                int32_t l_32[4];
                uint32_t l_144 = 1UL;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_32[i] = 0x2E0F6194L;
                l_144 = ((((l_13[1][1] = (-1L)) != func_14((safe_mul_func_uint16_t_u_u(g_5, (g_19 ^= l_12))), (l_140 = (((((safe_mul_func_uint16_t_u_u(((((((safe_mod_func_uint32_t_u_u((func_24((g_31 &= l_30), l_32[1], l_32[3], l_32[1], g_2) , g_54), 5L)) && 0x9DL) & l_139) , g_126.f4) && g_101) <= l_32[1]), 0x0208L)) || g_68) <= l_30) , g_83) ^ l_139)))) , 1UL) ^ 0xAFL);
                g_146 = l_145[0][1][3];
                g_83 = l_13[g_5][(g_5 + 1)];
            }
        }
        else
        { 
            if (l_12)
                break;
        }
    }
    l_147 = l_12;
    return g_91.f0;
}



static uint8_t  func_14(uint32_t  p_15, const uint64_t  p_16)
{ 
    uint32_t l_141 = 0xAF7E4E25L;
    l_141 = 0x1E0E4F97L;
    for (g_82 = 0; (g_82 >= 14); g_82++)
    { 
        return l_141;
    }
    return g_105;
}



static const struct S2  func_24(uint64_t  p_25, uint32_t  p_26, int8_t  p_27, int32_t  p_28, uint32_t  p_29)
{ 
    int8_t l_102 = 0x1AL;
    int32_t l_112[1][4];
    int32_t l_113 = 0x330BF87FL;
    struct S0 l_127[2][3] = {{{0xB972096BL,0x7AEC3750L},{0xB972096BL,0x7AEC3750L},{0xB972096BL,0x7AEC3750L}},{{0xB972096BL,0x7AEC3750L},{0xB972096BL,0x7AEC3750L},{0xB972096BL,0x7AEC3750L}}};
    const struct S2 l_138[3] = {{1UL,0UL},{1UL,0UL},{1UL,0UL}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_112[i][j] = 0x06170AF2L;
    }
    for (g_31 = (-10); (g_31 <= 8); g_31++)
    { 
        if (p_29)
            break;
    }
    for (p_26 = 0; (p_26 == 27); p_26 = safe_add_func_uint8_t_u_u(p_26, 1))
    { 
        int64_t l_55 = 1L;
        int32_t l_56 = (-7L);
        int32_t l_57 = (-1L);
        int8_t l_104 = 0xC1L;
        const uint32_t l_116 = 1UL;
        g_101 ^= (safe_sub_func_uint16_t_u_u((5L & p_26), (safe_rshift_func_int8_t_s_s(func_41((l_57 = (l_56 ^= (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((g_54 |= (safe_rshift_func_int16_t_s_s(((-5L) > (safe_div_func_int16_t_s_s(0x7F72L, g_31))), p_29))) | g_5), 12)), 2)), 7)) || 0x6906E71EBDC590CBLL) , l_55))), g_31), 5))));
        l_113 |= ((8L | ((l_56 = (l_57 ^= 0x4A82L)) >= (l_102 = p_29))) >= ((g_105++) || (((((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(0x15L, l_55)), g_59[0])) <= 18446744073709551613UL) & p_26) | g_2) | l_112[0][1])));
        g_119 = (g_83 = ((safe_sub_func_uint8_t_u_u(0x53L, (l_56 = ((l_116 <= (0x1A5471C440229A81LL > ((safe_rshift_func_int8_t_s_s(p_25, 3)) != p_28))) > 0UL)))) == 0x6C1642D9L));
    }
    g_83 &= (safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_112[0][3], ((((g_126 , (l_127[0][1] , ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(0x9BL, l_113)) && 4294967295UL), p_28)) , l_127[0][1].f1), g_82)), p_26)), l_102)) > p_28))) , g_59[0]) && p_29) || l_127[0][1].f1))), 0x54L)), p_28));
    return l_138[0];
}



static int8_t  func_41(uint32_t  p_42, uint8_t  p_43)
{ 
    int8_t l_58 = (-6L);
    int32_t l_80 = 1L;
    int32_t l_81 = 0x6BADC494L;
    g_59[0] = l_58;
lbl_65:
    for (l_58 = 0; (l_58 > (-9)); l_58--)
    { 
        uint64_t l_62 = 18446744073709551615UL;
        return l_62;
    }
    for (g_31 = (-3); (g_31 > 41); g_31++)
    { 
        const int16_t l_85 = 0L;
        for (p_43 = 0; p_43 < 1; p_43 += 1)
        {
            g_59[p_43] = 0x04B5BC68L;
        }
        for (l_58 = 0; (l_58 >= 0); l_58 -= 1)
        { 
            if (l_58)
                goto lbl_65;
        }
        for (p_43 = (-27); (p_43 != 14); p_43 = safe_add_func_int16_t_s_s(p_43, 1))
        { 
            int16_t l_84 = 0xEB26L;
            int32_t l_99 = 1L;
            ++g_68;
            if (g_68)
            { 
                int32_t l_79 = 0xCA477CAFL;
                l_84 = ((safe_rshift_func_uint16_t_u_s((g_83 = (g_31 <= ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((g_82 |= (g_31 != (l_81 = (safe_mul_func_int16_t_s_s(((l_80 ^= (5UL && ((l_79 = ((g_59[0] < (-7L)) == p_43)) ^ g_5))) || g_59[0]), 0x9D33L))))) || 0x22B46159332C3216LL), 3)) & l_58), g_59[0])) , 0x678016B8L))), p_43)) < p_43);
            }
            else
            { 
                g_83 = (((p_42 && l_85) && 2L) <= ((((safe_rshift_func_uint8_t_u_s(((l_80 ^= p_42) != 0xFEL), 2)) <= p_43) < 1UL) & 0x9C2BL));
            }
            for (l_81 = 9; (l_81 < (-8)); l_81 = safe_sub_func_uint32_t_u_u(l_81, 4))
            { 
                struct S1 l_92 = {4294967286UL,0xC75CA1D1A269FD2BLL,{0x01DDD0F9L,0xE72CC649L},3UL,0x7DEF5A7FL};
                l_80 = 0x8247AD07L;
                if (p_42)
                    break;
                g_100 &= (((+(g_91 , (l_92 , (!((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((((safe_unary_minus_func_uint64_t_u(0xC544848B2A496EB7LL)) && (l_99 ^= p_42)) < g_2) != l_92.f1), p_43)), 0xE8DEL)) > g_83))))) <= l_92.f3) , p_43);
            }
        }
    }
    return p_42;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);

    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    transparent_crc(g_126.f1, "g_126.f1", print_hash_value);
    transparent_crc(g_126.f2.f0, "g_126.f2.f0", print_hash_value);
    transparent_crc(g_126.f2.f1, "g_126.f2.f1", print_hash_value);
    transparent_crc(g_126.f3, "g_126.f3", print_hash_value);
    transparent_crc(g_126.f4, "g_126.f4", print_hash_value);
    transparent_crc(g_146.f0, "g_146.f0", print_hash_value);
    transparent_crc(g_146.f1, "g_146.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
