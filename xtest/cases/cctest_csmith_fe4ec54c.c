// SPDX-License-Identifier: MIT
// cctest_csmith_fe4ec54c.c --- cctest case csmith_fe4ec54c (csmith seed 4266575180)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf96d9bba */
/* @exp_ticks 0x348a */

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

// Options:   -s 4266575180 -o /tmp/csmith_gen_y4c2wj_d/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
};

union U1 {
   int32_t  f0;
};

union U2 {
   uint16_t  f0;
};


static uint8_t g_11 = 0xECL;
static struct S0 g_15 = {0x9EL};
static uint8_t g_16 = 0xC4L;
static union U2 g_47 = {1UL};
static uint16_t g_51 = 0x30B6L;
static uint32_t g_54 = 6UL;
static int64_t g_70 = (-1L);
static uint8_t g_83[4] = {0UL,0UL,0UL,0UL};
static int8_t g_99 = 0xEEL;
static int32_t g_100 = (-1L);
static uint8_t g_105 = 0x01L;
static uint32_t g_118 = 0x8590C99EL;
static int8_t g_123[3] = {0x5DL,0x5DL,0x5DL};
static uint8_t g_125 = 0xB3L;
static uint32_t g_141 = 0xE38BD601L;
static const struct S0 g_151 = {0x7DL};
static int32_t g_221[1][2] = {{0x875917A2L,0x875917A2L}};



static uint64_t  func_1(void);
static int32_t  func_19(struct S0  p_20, const struct S0  p_21, int32_t  p_22, uint32_t  p_23, uint8_t  p_24);
static struct S0  func_25(uint32_t  p_26, union U2  p_27, union U2  p_28, int8_t  p_29);
static int16_t  func_40(union U1  p_41, union U2  p_42, uint8_t  p_43, uint8_t  p_44, int8_t  p_45);




static uint64_t  func_1(void)
{ 
    const uint32_t l_2 = 18446744073709551615UL;
    union U2 l_72 = {65533UL};
    uint16_t l_183 = 65535UL;
    struct S0 l_200 = {0x29L};
    int32_t l_222 = (-5L);
    uint8_t l_240 = 0xD5L;
lbl_243:
    if ((l_2 >= (safe_rshift_func_uint8_t_u_s((+(!((safe_mul_func_uint8_t_u_u(l_2, (safe_lshift_func_int16_t_s_u(l_2, (l_2 && g_11))))) , g_11))), 0))))
    { 
        union U1 l_46 = {0x9281C1D9L};
        for (g_11 = 0; (g_11 < 40); g_11++)
        { 
            struct S0 l_14 = {0x82L};
            union U2 l_48 = {0x4864L};
            g_15 = l_14;
            g_16 = g_15.f0;
            for (g_16 = (-5); (g_16 == 2); g_16 = safe_add_func_uint32_t_u_u(g_16, 9))
            { 
                const uint32_t l_71 = 18446744073709551615UL;
                union U2 l_73 = {0UL};
                int32_t l_184[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_184[i] = 0x3838C22DL;
                l_184[0] ^= ((g_11 , func_19(func_25((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((g_70 |= (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(func_40(l_46, (l_48 = g_47), (safe_mul_func_uint16_t_u_u(g_51, g_11)), g_15.f0, g_51), g_11)), g_11))), l_71)), l_2)), l_2)), l_72, l_73, l_71), g_151, l_14.f0, l_73.f0, g_151.f0)) == l_183);
                if (g_83[3])
                    continue;
            }
        }
    }
    else
    { 
        int16_t l_199 = 0xE61EL;
        int32_t l_230 = 0x4FB469CFL;
lbl_213:
        g_100 = ((safe_mod_func_int64_t_s_s(g_47.f0, (((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((g_16 && (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0x13F98BF1L, (safe_lshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((0x5FF3L || 0x06D6L), g_123[0])), g_11)))), g_83[3]))), l_199)), (-1L))) | 0x72EDA5BF8BA2E113LL) | l_199))) == l_183);
        for (g_15.f0 = 2; (g_15.f0 >= 0); g_15.f0 -= 1)
        { 
            int32_t l_210 = 0x3EA4B039L;
            l_200 = l_200;
            for (l_72.f0 = 0; (l_72.f0 <= 2); l_72.f0 += 1)
            { 
                const uint64_t l_211 = 18446744073709551613UL;
                int32_t l_212[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_212[i][j] = 8L;
                }
                l_212[1][0] = (safe_mul_func_uint16_t_u_u(g_123[g_15.f0], (((g_54 , (((safe_mul_func_int16_t_s_s(((g_125 ^ (((safe_unary_minus_func_uint32_t_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x8996L, g_54)), l_210)))) || g_51) ^ g_141)) | 1UL), g_70)) , l_211) <= l_183)) , l_199) , g_123[g_15.f0])));
            }
            for (l_199 = 2; (l_199 >= 0); l_199 -= 1)
            { 
                const uint32_t l_216 = 1UL;
                int32_t l_219 = 0xC00671E2L;
                int32_t l_220[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_220[i] = 5L;
                if (g_141)
                    goto lbl_213;
                l_222 &= (0x6011D501A0C7C7AFLL > (l_216 == (((g_221[0][1] |= ((l_220[1] = (l_2 || (safe_add_func_int16_t_s_s((l_219 = (((-8L) || g_123[0]) && g_125)), g_118)))) , 0x74609296FF799FEALL)) < g_83[3]) >= g_99)));
                l_230 ^= (safe_mul_func_uint16_t_u_u((~4UL), (safe_lshift_func_int8_t_s_u((((((safe_div_func_int8_t_s_s(l_216, 8L)) ^ ((g_123[l_199] &= g_54) , l_210)) && g_118) , 1UL) < g_141), 1))));
            }
        }
    }
    for (g_15.f0 = 2; (g_15.f0 < (-23)); g_15.f0 = safe_sub_func_int32_t_s_s(g_15.f0, 8))
    { 
        int8_t l_238 = 1L;
        if (((0xEDF4L <= (safe_lshift_func_uint16_t_u_s(0UL, 14))) > g_83[3]))
        { 
            for (g_118 = 27; (g_118 >= 48); g_118 = safe_add_func_uint8_t_u_u(g_118, 7))
            { 
                int8_t l_237 = 0x35L;
                int32_t l_239 = 0xC82483C1L;
                l_240++;
            }
            if (g_15.f0)
                goto lbl_243;
            for (g_47.f0 = 27; (g_47.f0 != 11); g_47.f0 = safe_sub_func_uint8_t_u_u(g_47.f0, 8))
            { 
                g_221[0][0] &= 0x213F6597L;
            }
        }
        else
        { 
            l_200 = g_151;
            l_222 = 1L;
        }
        for (g_105 = 0; (g_105 <= 3); g_105 += 1)
        { 
            int i;
            for (g_100 = 0; (g_100 <= 3); g_100 += 1)
            { 
                l_222 |= 2L;
            }
            return g_83[g_105];
        }
    }
    return g_70;
}



static int32_t  func_19(struct S0  p_20, const struct S0  p_21, int32_t  p_22, uint32_t  p_23, uint8_t  p_24)
{ 
    uint64_t l_171 = 0x412C475536986BD0LL;
    int32_t l_182 = 4L;
    for (g_105 = 2; (g_105 == 34); ++g_105)
    { 
        uint32_t l_170 = 18446744073709551611UL;
        l_171 = ((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(0L, (((safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((safe_add_func_int32_t_s_s((g_100 = l_170), (((((((l_170 >= (g_141 &= p_23)) < p_21.f0) > p_21.f0) & g_123[0]) < p_22) > 0xB2C3L) | g_70))) == p_21.f0), 0x9104C899101CFD3ALL)), l_170)) & 0UL) & l_170))), 5)), 65530UL)), p_20.f0)), p_23)) && l_170);
        g_100 ^= l_170;
        g_100 = (safe_div_func_int32_t_s_s((((+0UL) && (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_171, 6)), (l_182 = (((safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s(g_123[1], (-5L))))) > 0xC83DL) & g_125))))) , p_23), 1UL));
    }
    return p_23;
}



static struct S0  func_25(uint32_t  p_26, union U2  p_27, union U2  p_28, int8_t  p_29)
{ 
    union U2 l_74[4] = {{0x3D48L},{0x3D48L},{0x3D48L},{0x3D48L}};
    int32_t l_92 = (-1L);
    int32_t l_94 = 2L;
    int i;
    for (g_47.f0 = 0; (g_47.f0 <= 3); g_47.f0 += 1)
    { 
        uint8_t l_93 = 1UL;
        int32_t l_102 = 0x59E808E2L;
        int32_t l_104 = (-8L);
        int32_t l_124 = 1L;
        union U2 l_130[1][1][3] = {{{{0UL},{0UL},{0UL}}}};
        int i, j, k;
        if ((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((p_29 ^ ((safe_lshift_func_uint8_t_u_s((g_83[3] = p_26), (safe_lshift_func_int16_t_s_u(((l_93 = (safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((g_54 == (l_92 = 0x5881DD57L)), 2)) > 0x4BCA0F96L), 0xAE9822C2642A2CA0LL)), p_26))) || 0xF804L), 1)))) & 5UL)), l_94)), p_28.f0)), p_28.f0)))
        { 
            int32_t l_98[2];
            int32_t l_101 = 0xB9758AC4L;
            int32_t l_103 = 0xBA2AAC5DL;
            int i;
            for (i = 0; i < 2; i++)
                l_98[i] = 1L;
            for (p_26 = 0; (p_26 <= 3); p_26 += 1)
            { 
                uint32_t l_95 = 0UL;
                --l_95;
            }
            g_105++;
            for (l_104 = 0; (l_104 <= 3); l_104 += 1)
            { 
                int32_t l_119 = 0xF5ED5A8DL;
                g_100 = 0xA741179DL;
                g_100 ^= ((l_119 = (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_103 = g_51), l_102)), (((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(l_94, (l_98[1] < p_29))) < p_28.f0), 0xFDD7L)) == g_118) == g_83[3]), l_94)) <= 0xBAL) && 0x688ECCDF33783651LL)))) | l_98[1]);
                if (g_83[1])
                    break;
            }
        }
        else
        { 
            int i;
            if ((l_74[g_47.f0] , ((safe_add_func_int64_t_s_s(p_26, 0x796DE133A9B92FD5LL)) & p_26)))
            { 
                int32_t l_122[5][5][1] = {{{0xBF70E0EEL},{0xE3C4023AL},{0xBF70E0EEL},{0xA172C137L},{0xBF70E0EEL}},{{0xE3C4023AL},{0xBF70E0EEL},{0xA172C137L},{0xBF70E0EEL},{0xE3C4023AL}},{{0xBF70E0EEL},{0xA172C137L},{0xBF70E0EEL},{0xE3C4023AL},{0xBF70E0EEL}},{{0xA172C137L},{0xBF70E0EEL},{0xE3C4023AL},{0xBF70E0EEL},{0xA172C137L}},{{0xBF70E0EEL},{0xE3C4023AL},{0xBF70E0EEL},{0xA172C137L},{0xBF70E0EEL}}};
                int i, j, k;
                g_125--;
            }
            else
            { 
                const uint64_t l_135[3] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
                int32_t l_139 = 6L;
                int32_t l_140 = 0x97105BA9L;
                int i;
                g_100 = (safe_mul_func_uint8_t_u_u((l_130[0][0][2] , (g_83[3]--)), ((g_47.f0 & ((safe_rshift_func_int16_t_s_u((l_140 = (l_139 = ((l_135[0] > ((~(safe_div_func_int8_t_s_s((0x02L > g_118), 0x5EL))) , p_26)) ^ (-1L)))), g_16)) & g_47.f0)) || p_27.f0)));
                if (g_125)
                    break;
            }
            ++g_141;
            for (p_26 = 0; (p_26 < 46); ++p_26)
            { 
                struct S0 l_148 = {0xF3L};
                l_94 = (((safe_mod_func_uint32_t_u_u(((((l_148 , g_123[0]) != ((((g_141 = (((safe_mul_func_uint16_t_u_u((((p_26 | (l_104 & l_148.f0)) & p_27.f0) ^ g_141), p_26)) && g_83[3]) , 4294967294UL)) && 0x7CDBDB14L) > 0UL) != g_125)) < 1UL) , p_28.f0), 0x949FC4A8L)) , 0x63L) & (-1L));
                g_15 = (l_130[0][0][2] , l_148);
            }
        }
    }
    return g_15;
}



static int16_t  func_40(union U1  p_41, union U2  p_42, uint8_t  p_43, uint8_t  p_44, int8_t  p_45)
{ 
    int32_t l_68 = 0xE7BAA9D7L;
    int32_t l_69[3][2][2] = {{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}}};
    int i, j, k;
    l_69[2][0][1] ^= (safe_lshift_func_int8_t_s_s((g_54 = (g_15.f0 = g_15.f0)), ((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((p_43 <= (safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((+(g_47.f0 > (safe_mul_func_int8_t_s_s(0x3BL, l_68)))), g_47.f0)) || 1UL), g_16)), 1L))), g_16)), g_11)) | 0xB249L)));
    return g_16;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_123[i], "g_123[i]", print_hash_value);

    }
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_221[i][j], "g_221[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
