// SPDX-License-Identifier: MIT
// cctest_csmith_363f38c3.c --- cctest case csmith_363f38c3 (csmith seed 910112963)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6fa708bc */
/* @exp_ticks 0x3441 */

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

// Options:   -s 910112963 -o /tmp/csmith_gen_gke26yqe/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   const int64_t  f1;
   int16_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint64_t  f0;
   const uint8_t  f1;
   uint16_t  f2;
   uint64_t  f3;
   int16_t  f4;
};
#pragma pack(pop)

union U3 {
   const struct S1  f0;
   uint8_t  f1;
   const struct S2  f2;
};


static int32_t g_3[3] = {(-1L),(-1L),(-1L)};
static int32_t g_4 = 3L;
static struct S1 g_19 = {0x9EC71CB2L,0xF08E2294L,0xB489F7A9L,0x2E819D33L};
static struct S1 g_54 = {-10L,1UL,0x5E9F1F6AL,-4L};
static struct S0 g_55 = {0xE53ADD1EL,1L,0x0E25L};
static uint8_t g_70[2] = {0x60L,0x60L};
static uint32_t g_108 = 0xCABD9790L;
static uint32_t g_134 = 1UL;
static int64_t g_137 = 0x7C33E8CD85757710LL;
static struct S2 g_138 = {0x7CC0E31BEAA374F6LL,0xADL,0x5AA8L,1UL,0xE04EL};



static struct S2  func_1(void);
static int64_t  func_13(int64_t  p_14, int32_t  p_15, const int8_t  p_16, uint32_t  p_17, uint64_t  p_18);
static int32_t  func_22(const struct S0  p_23, uint32_t  p_24, const uint16_t  p_25, struct S2  p_26, uint16_t  p_27);
static struct S0  func_28(uint16_t  p_29, int16_t  p_30, struct S2  p_31);




static struct S2  func_1(void)
{ 
    uint8_t l_2[4] = {0UL,0UL,0UL,0UL};
    const int16_t l_5 = 0x96EEL;
    int i;
    for (g_3[0] = 0; (g_3[0] <= 3); g_3[0] += 1)
    { 
        int i;
        if (l_2[g_3[0]])
            break;
        if (l_2[0])
            break;
        for (g_4 = 0; (g_4 <= 3); g_4 += 1)
        { 
            uint64_t l_20 = 0UL;
            uint16_t l_21 = 1UL;
            int i;
            if (l_5)
                break;
            g_137 = (safe_lshift_func_uint8_t_u_u((l_2[g_3[0]] = (+((safe_mod_func_uint16_t_u_u(0x50A4L, g_3[0])) , (safe_add_func_int32_t_s_s(((func_13((g_19 , l_20), g_19.f2, l_20, g_4, l_21) || g_54.f3) | 1L), l_5))))), g_55.f1));
        }
    }
    return g_138;
}



static int64_t  func_13(int64_t  p_14, int32_t  p_15, const int8_t  p_16, uint32_t  p_17, uint64_t  p_18)
{ 
    uint32_t l_32 = 1UL;
    struct S2 l_33[4][2][4] = {{{{1UL,255UL,0xB576L,0x6AB81D4B4EA65D33LL,1L},{1UL,255UL,0xB576L,0x6AB81D4B4EA65D33LL,1L},{0UL,247UL,0UL,0UL,1L},{0x20A3D57638FF4399LL,0x91L,0xE745L,0x5BB085CA7DBC8B69LL,-10L}},{{0x718302CCA7A22F0FLL,0xB8L,0x2A60L,0x4E023024A1329794LL,0L},{9UL,0xA4L,65531UL,18446744073709551609UL,0x983DL},{0x718302CCA7A22F0FLL,0xB8L,0x2A60L,0x4E023024A1329794LL,0L},{0UL,247UL,0UL,0UL,1L}}},{{{0x718302CCA7A22F0FLL,0xB8L,0x2A60L,0x4E023024A1329794LL,0L},{0UL,247UL,0UL,0UL,1L},{0UL,247UL,0UL,0UL,1L},{0x718302CCA7A22F0FLL,0xB8L,0x2A60L,0x4E023024A1329794LL,0L}},{{1UL,255UL,0xB576L,0x6AB81D4B4EA65D33LL,1L},{0UL,247UL,0UL,0UL,1L},{0x20A3D57638FF4399LL,0x91L,0xE745L,0x5BB085CA7DBC8B69LL,-10L},{0UL,247UL,0UL,0UL,1L}}},{{{0UL,247UL,0UL,0UL,1L},{9UL,0xA4L,65531UL,18446744073709551609UL,0x983DL},{0x20A3D57638FF4399LL,0x91L,0xE745L,0x5BB085CA7DBC8B69LL,-10L},{0x20A3D57638FF4399LL,0x91L,0xE745L,0x5BB085CA7DBC8B69LL,-10L}},{{1UL,255UL,0xB576L,0x6AB81D4B4EA65D33LL,1L},{1UL,255UL,0xB576L,0x6AB81D4B4EA65D33LL,1L},{0UL,247UL,0UL,0UL,1L},{0x20A3D57638FF4399LL,0x91L,0xE745L,0x5BB085CA7DBC8B69LL,-10L}}},{{{0x718302CCA7A22F0FLL,0xB8L,0x2A60L,0x4E023024A1329794LL,0L},{9UL,0xA4L,65531UL,18446744073709551609UL,0x983DL},{0x718302CCA7A22F0FLL,0xB8L,0x2A60L,0x4E023024A1329794LL,0L},{0UL,247UL,0UL,0UL,1L}},{{0x718302CCA7A22F0FLL,0xB8L,0x2A60L,0x4E023024A1329794LL,0L},{0UL,247UL,0UL,0UL,1L},{0UL,247UL,0UL,0UL,1L},{0x718302CCA7A22F0FLL,0xB8L,0x2A60L,0x4E023024A1329794LL,0L}}}};
    int32_t l_100[4] = {0x33D480ABL,0x33D480ABL,0x33D480ABL,0x33D480ABL};
    struct S1 l_111 = {0x1A0B9A4AL,0xE56A0368L,1L,-1L};
    uint64_t l_117 = 0xC019F83A3BBF1768LL;
    int i, j, k;
    if (func_22(func_28(l_32, l_32, l_33[3][0][3]), l_33[3][0][3].f2, g_4, l_33[0][0][0], g_3[1]))
    { 
        int32_t l_98 = 0x0050AECCL;
        int32_t l_99 = (-6L);
        int32_t l_101 = 0L;
        int32_t l_104 = 0x0F736FA5L;
        int32_t l_105 = 0xC33A15E2L;
        int32_t l_106 = (-4L);
        const union U3 l_114 = {{1L,0xCFAEA650L,0xD46BF4A8L,0xD1E3A85EL}};
        for (g_54.f0 = 0; (g_54.f0 != 8); g_54.f0++)
        { 
            int8_t l_102 = 0L;
            int32_t l_103 = 0xFD65E783L;
            int32_t l_107 = 0x9DD727E6L;
            g_108++;
        }
        g_54 = (g_19 = (l_111 = g_19));
        l_99 = (l_111.f0 |= ((safe_add_func_uint16_t_u_u((l_111.f2 &= (l_114 , (safe_div_func_int64_t_s_s((p_14 ^= (l_114.f0.f1 | (l_114.f0.f1 & (l_117 = (g_19.f2 == 0x88L))))), g_19.f0)))), 1L)) <= l_100[1]));
    }
    else
    { 
        uint16_t l_120 = 0x6806L;
        struct S1 l_123[5] = {{0x6651D59FL,0x421CF99DL,-1L,0L},{0x6651D59FL,0x421CF99DL,-1L,0L},{0x6651D59FL,0x421CF99DL,-1L,0L},{0x6651D59FL,0x421CF99DL,-1L,0L},{0x6651D59FL,0x421CF99DL,-1L,0L}};
        int i;
        for (g_19.f1 = 0; (g_19.f1 > 39); g_19.f1++)
        { 
            ++l_120;
            l_111 = l_123[1];
        }
        for (l_111.f3 = (-17); (l_111.f3 <= 14); ++l_111.f3)
        { 
            uint16_t l_133 = 0UL;
            l_123[1] = l_123[1];
            l_123[1].f2 = (safe_unary_minus_func_int64_t_s((((safe_mul_func_int16_t_s_s(0xCE30L, (((safe_add_func_int16_t_s_s(l_123[1].f1, ((0xEFL || ((safe_lshift_func_int16_t_s_u(((p_18 = (p_17 , l_33[3][0][3].f1)) , l_133), p_16)) > l_133)) <= l_133))) <= g_55.f1) && l_33[3][0][3].f4))) || 1UL) <= 0UL)));
        }
        return l_123[1].f1;
    }
    --g_134;
    return l_33[3][0][3].f1;
}



static int32_t  func_22(const struct S0  p_23, uint32_t  p_24, const uint16_t  p_25, struct S2  p_26, uint16_t  p_27)
{ 
    int32_t l_95 = 2L;
    return l_95;
}



static struct S0  func_28(uint16_t  p_29, int16_t  p_30, struct S2  p_31)
{ 
    int64_t l_43 = 0xF720AFD3265C9E2FLL;
    int32_t l_50 = 0x277CE2A7L;
    struct S1 l_56 = {0x09B52FFBL,7UL,0xFEB948C0L,2L};
    struct S1 l_57 = {0xC708470FL,4294967292UL,1L,1L};
    uint32_t l_59 = 0x47F69394L;
    struct S0 l_94 = {0x8CCD7FECL,-7L,0x6362L};
    if ((l_43 = (p_31.f4 < (g_19.f2 , (!(safe_sub_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(0xDBL, 1)) != ((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_30, g_19.f1)), g_19.f1)) || g_19.f2)) && p_31.f3), p_29)))))))
    { 
        int16_t l_58 = 0xE2FEL;
        int32_t l_66 = 0xC7D9ACC9L;
        struct S0 l_79 = {0xF3BB3A51L,0x8956685BA07B4D73LL,6L};
        for (g_19.f2 = 0; (g_19.f2 > 26); g_19.f2 = safe_add_func_int8_t_s_s(g_19.f2, 1))
        { 
            struct S1 l_53 = {0x390E64C7L,0x59AE0A12L,0x6C4949F7L,-1L};
            uint16_t l_65[2];
            int i;
            for (i = 0; i < 2; i++)
                l_65[i] = 0x2D1AL;
            if ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((l_50 = 0xD8L) > p_31.f0), (safe_sub_func_int8_t_s_s((g_4 > (((p_31.f4 , g_19.f1) || g_3[0]) <= p_31.f2)), p_30)))), p_31.f3)))
            { 
                g_54 = l_53;
                l_57 = (g_55 , (l_56 = l_53));
                l_59--;
            }
            else
            { 
                uint64_t l_64 = 0UL;
                int8_t l_69 = 1L;
                l_66 = ((safe_lshift_func_int16_t_s_s(0L, (((-1L) | l_64) == 0x0EL))) <= l_65[1]);
                l_66 = ((safe_sub_func_int8_t_s_s(g_55.f2, p_31.f0)) <= (0xBEL != (g_70[1] = l_69)));
            }
        }
        for (g_19.f3 = 20; (g_19.f3 >= 26); ++g_19.f3)
        { 
            for (l_57.f2 = 0; (l_57.f2 <= 19); l_57.f2++)
            { 
                g_54.f2 = (-5L);
                l_56.f2 &= ((safe_lshift_func_int16_t_s_s(g_54.f0, 12)) <= (safe_div_func_uint16_t_u_u(8UL, g_3[2])));
            }
            return l_79;
        }
        for (p_31.f4 = 28; (p_31.f4 != (-26)); p_31.f4 = safe_sub_func_uint8_t_u_u(p_31.f4, 6))
        { 
            if (p_31.f4)
                break;
            return g_55;
        }
    }
    else
    { 
        int32_t l_93 = 5L;
        for (g_55.f2 = 25; (g_55.f2 == 10); g_55.f2--)
        { 
            uint16_t l_84 = 0xA510L;
            if (l_84)
                break;
            g_19 = g_19;
        }
        g_19.f0 |= ((l_57.f0 = (safe_unary_minus_func_int32_t_s((safe_unary_minus_func_uint16_t_u(((l_50 = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(g_54.f0, ((g_19.f3 < l_93) <= 4294967291UL))), g_19.f2)) && l_93), 0x1BL))) < g_70[0])))))) || 0xF19FL);
    }
    l_50 = p_31.f3;
    return l_94;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    transparent_crc(g_19.f2, "g_19.f2", print_hash_value);
    transparent_crc(g_19.f3, "g_19.f3", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_54.f2, "g_54.f2", print_hash_value);
    transparent_crc(g_54.f3, "g_54.f3", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_55.f2, "g_55.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_70[i], "g_70[i]", print_hash_value);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    transparent_crc(g_138.f3, "g_138.f3", print_hash_value);
    transparent_crc(g_138.f4, "g_138.f4", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
