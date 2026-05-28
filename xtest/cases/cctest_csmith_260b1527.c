// SPDX-License-Identifier: MIT
// cctest_csmith_260b1527.c --- cctest case csmith_260b1527 (csmith seed 638260519)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe8d3a9d1 */
/* @exp_ticks 0x3487 */

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

// Options:   -s 638260519 -o /tmp/csmith_gen_zi3grhrn/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
};

union U1 {
   uint16_t  f0;
};


static int64_t g_2 = 0x1C29000D4E7937D8LL;
static uint32_t g_7 = 4294967294UL;
static int8_t g_8 = 0xA4L;
static int64_t g_32 = 0x376522452A2C7A2ELL;
static int64_t g_33 = 3L;
static struct S0 g_45 = {253UL};
static int32_t g_51 = 0xF5738F5EL;
static uint32_t g_76 = 4294967295UL;
static int64_t g_81[5][2] = {{0x7A227BBAC67CE96ELL,(-3L)},{0x138F517126B21CEBLL,0x7A227BBAC67CE96ELL},{1L,1L},{1L,0x7A227BBAC67CE96ELL},{0x138F517126B21CEBLL,(-3L)}};
static int32_t g_86 = 0xA8B8E484L;
static uint16_t g_87 = 1UL;
static uint64_t g_101 = 18446744073709551615UL;
static int32_t g_130 = 0xC5F39321L;



static const uint32_t  func_1(void);
static int8_t  func_13(uint32_t  p_14);
static struct S0  func_19(int64_t  p_20, uint32_t  p_21, uint16_t  p_22);
static struct S0  func_36(int8_t  p_37, int32_t  p_38, uint8_t  p_39, uint32_t  p_40, struct S0  p_41);




static const uint32_t  func_1(void)
{ 
    uint64_t l_3 = 0x2751C76D7BE7E550LL;
    int16_t l_6[1];
    int32_t l_131[5];
    int i;
    for (i = 0; i < 1; i++)
        l_6[i] = 0xE1B6L;
    for (i = 0; i < 5; i++)
        l_131[i] = 0x67A6C791L;
    ++l_3;
    for (l_3 = 0; (l_3 <= 0); l_3 += 1)
    { 
        uint16_t l_119 = 0x2BA1L;
        int32_t l_120 = 0xCBDEF93AL;
        int i;
        g_8 ^= (g_7 = l_6[l_3]);
        l_120 = (((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(0x51L, func_13((safe_rshift_func_int8_t_s_u(g_7, 0))))), (l_6[0] && (-1L)))) , l_119) > g_81[1][1]);
        l_120 = (((((g_45.f0 <= ((safe_rshift_func_uint8_t_u_s(((+(g_8 &= (safe_lshift_func_int16_t_s_u(l_6[0], (safe_rshift_func_uint16_t_u_s((((((safe_div_func_uint32_t_u_u((7L <= (g_81[4][1] = ((g_130 ^= l_119) , 0x5261AE0F1B3FF46ELL))), g_7)) , 0x87L) < l_6[0]) | 0L) != g_87), l_131[1])))))) || 0xF5299BB118774359LL), 1)) != l_3)) > 0x73854AF0FF7F8D1FLL) || 0x5AD64697L) , l_6[0]) & l_131[1]);
    }
    return l_6[0];
}



static int8_t  func_13(uint32_t  p_14)
{ 
    uint32_t l_25[5][3][2] = {{{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L}},{{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L}},{{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L}},{{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L}},{{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L},{0xA84CBED5L,0xA84CBED5L}}};
    int32_t l_31[5];
    uint32_t l_82 = 0UL;
    int32_t l_116 = 4L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_31[i] = 8L;
    for (g_8 = 12; (g_8 == 27); g_8 = safe_add_func_int16_t_s_s(g_8, 1))
    { 
        int64_t l_79 = 0L;
        int32_t l_80[4];
        int64_t l_85 = 0x39BFC11C9306A2EELL;
        int i;
        for (i = 0; i < 4; i++)
            l_80[i] = 1L;
        l_79 |= (func_19(((g_2 &= (safe_add_func_int16_t_s_s((l_25[4][0][0] & (safe_div_func_int32_t_s_s((g_32 = ((safe_sub_func_int16_t_s_s(0x582BL, ((!g_7) >= (l_31[4] = (0x10A83AFDL || p_14))))) || g_8)), 4294967294UL))), (-1L)))) && g_33), l_25[2][2][1], g_7) , 0x332CF88EL);
        ++l_82;
        g_87++;
    }
    for (g_33 = 0; (g_33 >= 14); ++g_33)
    { 
        uint32_t l_94 = 0xCA4FAC92L;
        int32_t l_99 = 0x33C05717L;
        int32_t l_100[1][4];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_100[i][j] = 4L;
        }
        for (p_14 = 18; (p_14 > 57); p_14 = safe_add_func_uint16_t_u_u(p_14, 1))
        { 
            int16_t l_98 = 1L;
            if (g_8)
                break;
            if (l_94)
            { 
                uint8_t l_95 = 0x31L;
                l_95 = (p_14 == 4294967295UL);
                g_51 |= (safe_sub_func_int8_t_s_s(g_8, 8UL));
            }
            else
            { 
                g_51 = (g_81[1][1] < p_14);
            }
            ++g_101;
        }
    }
    if ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_116 = (safe_mul_func_uint16_t_u_u(0xB8C6L, ((l_31[2] |= (safe_sub_func_uint8_t_u_u((0x5B57BD3FL == g_8), ((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(g_76, 0x435DL)) , g_33), 0xE7L)) | g_51)))) && 0x678FL)))), l_25[4][1][0])), 13)))
    { 
        int8_t l_117 = 4L;
        return l_117;
    }
    else
    { 
        int32_t l_118[3];
        int i;
        for (i = 0; i < 3; i++)
            l_118[i] = (-1L);
        return l_118[0];
    }
}



static struct S0  func_19(int64_t  p_20, uint32_t  p_21, uint16_t  p_22)
{ 
    int8_t l_34[4] = {0L,0L,0L,0L};
    int32_t l_35 = 7L;
    union U1 l_44 = {0x3533L};
    struct S0 l_75 = {8UL};
    int i;
    l_35 = l_34[0];
    l_75 = func_36((((safe_rshift_func_int16_t_s_u(((l_35 = (0xCC02L || (-8L))) || (g_7 &= 0xCB1BEBA4L)), (p_22 &= (l_44 , g_32)))) >= p_21) ^ l_44.f0), g_8, g_8, p_20, g_45);
    g_76--;
    return l_75;
}



static struct S0  func_36(int8_t  p_37, int32_t  p_38, uint8_t  p_39, uint32_t  p_40, struct S0  p_41)
{ 
    uint32_t l_49 = 18446744073709551609UL;
    for (p_40 = 0; (p_40 <= 22); p_40 = safe_add_func_int64_t_s_s(p_40, 1))
    { 
        union U1 l_48[3][4] = {{{0x1685L},{0x1685L},{0x1685L},{0x1685L}},{{0x1685L},{0x1685L},{0x1685L},{0x1685L}},{{0x1685L},{0x1685L},{0x1685L},{0x1685L}}};
        int32_t l_50 = 0x8E70E9EEL;
        int i, j;
        g_51 = (((((l_50 = ((l_48[0][2] , p_41.f0) ^ l_49)) == (0x79L >= g_32)) <= g_33) > l_49) || 0x1BL);
        g_45 = p_41;
        for (g_45.f0 = 0; (g_45.f0 < 40); ++g_45.f0)
        { 
            int32_t l_62[5][3][4] = {{{(-1L),0xA82E93B6L,0xCDBA0066L,0x5262C085L},{0xA82E93B6L,5L,0xCDBA0066L,0xCDBA0066L},{(-1L),(-1L),1L,(-1L)}},{{0L,0xD2E7865DL,1L,0x5262C085L},{1L,0x5262C085L,0xA82E93B6L,1L},{(-1L),0x5262C085L,(-1L),0x5262C085L}},{{0x5262C085L,0xD2E7865DL,0xCDBA0066L,(-1L)},{1L,(-1L),0xA82E93B6L,0xCDBA0066L},{0L,5L,(-1L),0x5262C085L}},{{0L,0xA82E93B6L,0xA82E93B6L,0L},{1L,0x5262C085L,0xCDBA0066L,0xA82E93B6L},{0x5262C085L,5L,(-1L),(-1L)}},{{(-1L),1L,0xA82E93B6L,(-1L)},{1L,5L,1L,0xA82E93B6L},{0L,0x5262C085L,1L,0L}}};
            const struct S0 l_74[3][2] = {{{0x8FL},{0x8FL}},{{0x8FL},{0x8FL}},{{0x8FL},{0x8FL}}};
            int i, j, k;
            for (g_7 = 0; (g_7 <= 2); g_7 += 1)
            { 
                int64_t l_65 = (-1L);
                l_50 = (safe_add_func_uint64_t_u_u(((0x4923552EL <= (-2L)) == (18446744073709551612UL == (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(0x1960CC19L, l_62[3][0][0])) || 0xEEBEB99CL), l_49)), p_37)))), g_33));
                g_51 = ((safe_sub_func_uint8_t_u_u((++p_39), ((safe_sub_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((-4L), (((((safe_sub_func_int32_t_s_s(((l_48[0][2].f0 , (p_41.f0 | (((l_74[1][1] , g_8) && g_51) && l_65))) & p_40), l_74[1][1].f0)) | g_33) || 0x0FC3L) ^ (-1L)) || 0xC3ACL))) >= 0x0B38L), g_2)) & 0L))) || (-1L));
            }
        }
    }
    return p_41;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_81[i][j], "g_81[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
