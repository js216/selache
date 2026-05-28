// SPDX-License-Identifier: MIT
// cctest_csmith_ea5fc0fa.c --- cctest case csmith_ea5fc0fa (csmith seed 3932143866)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x63f6ea9e */
/* @exp_ticks 0x63af */

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

// Options:   -s 3932143866 -o /tmp/csmith_gen_yczicopx/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint32_t  f0;
   uint64_t  f1;
   int8_t  f2;
   int32_t  f3;
   int32_t  f4;
   int32_t  f5;
};

union U1 {
   uint16_t  f0;
   const int64_t  f1;
   uint8_t  f2;
   struct S0  f3;
};


static int32_t g_2 = 5L;
static int32_t g_5 = 1L;
static uint8_t g_29 = 0xDCL;
static int64_t g_60[1][4][3] = {{{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}}};
static uint32_t g_61[2] = {4294967295UL,4294967295UL};
static uint16_t g_66[4] = {0x593BL,0x593BL,0x593BL,0x593BL};
static struct S0 g_68[1][4][5] = {{{{0x84CF7483L,0xF01DA63D7FDF8BF2LL,-8L,1L,3L,0x375EFDD8L},{0x84CF7483L,0xF01DA63D7FDF8BF2LL,-8L,1L,3L,0x375EFDD8L},{0x41B43419L,0UL,-3L,0x71515025L,0L,-8L},{0x41B43419L,0UL,-3L,0x71515025L,0L,-8L},{0x84CF7483L,0xF01DA63D7FDF8BF2LL,-8L,1L,3L,0x375EFDD8L}},{{0UL,0x80EC7D2368087100LL,0x97L,0x2ED884ACL,-1L,3L},{4294967287UL,18446744073709551615UL,0x3FL,0xC725EA9BL,1L,0x5BF9BF4AL},{0UL,0x80EC7D2368087100LL,0x97L,0x2ED884ACL,-1L,3L},{4294967287UL,18446744073709551615UL,0x3FL,0xC725EA9BL,1L,0x5BF9BF4AL},{0UL,0x80EC7D2368087100LL,0x97L,0x2ED884ACL,-1L,3L}},{{0x84CF7483L,0xF01DA63D7FDF8BF2LL,-8L,1L,3L,0x375EFDD8L},{0x41B43419L,0UL,-3L,0x71515025L,0L,-8L},{0x41B43419L,0UL,-3L,0x71515025L,0L,-8L},{0x84CF7483L,0xF01DA63D7FDF8BF2LL,-8L,1L,3L,0x375EFDD8L},{0x84CF7483L,0xF01DA63D7FDF8BF2LL,-8L,1L,3L,0x375EFDD8L}},{{4294967286UL,3UL,0x75L,0xD6847A7AL,0L,0x8E2D0685L},{4294967287UL,18446744073709551615UL,0x3FL,0xC725EA9BL,1L,0x5BF9BF4AL},{4294967286UL,3UL,0x75L,0xD6847A7AL,0L,0x8E2D0685L},{4294967287UL,18446744073709551615UL,0x3FL,0xC725EA9BL,1L,0x5BF9BF4AL},{4294967286UL,3UL,0x75L,0xD6847A7AL,0L,0x8E2D0685L}}}};
static uint32_t g_69 = 0xE52BDABFL;
static int64_t g_76 = (-3L);
static uint32_t g_84[2] = {0xBB06C877L,0xBB06C877L};
static uint32_t g_85 = 0x8A02C35BL;
static int16_t g_94 = 0x3FACL;



static uint8_t  func_1(void);
static struct S0  func_16(uint8_t  p_17, const uint16_t  p_18);
static int32_t  func_19(uint32_t  p_20, const uint64_t  p_21, int32_t  p_22);
static const int32_t  func_25(int64_t  p_26, int64_t  p_27);




static uint8_t  func_1(void)
{ 
    union U1 l_15[1] = {{0xF2FDL}};
    const uint32_t l_23 = 4294967295UL;
    const int8_t l_83 = 1L;
    const int32_t l_119 = 0xD9898775L;
    uint8_t l_120 = 0UL;
    int i;
    for (g_2 = 0; (g_2 > (-22)); --g_2)
    { 
        uint32_t l_6 = 6UL;
        struct S0 l_80[3] = {{4294967295UL,2UL,0x7DL,-1L,0L,0xD6F6C97CL},{4294967295UL,2UL,0x7DL,-1L,0L,0xD6F6C97CL},{4294967295UL,2UL,0x7DL,-1L,0L,0xD6F6C97CL}};
        int i;
        l_6++;
        l_15[0].f3.f3 = (safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_2, (safe_add_func_int8_t_s_s((g_68[0][3][4].f2 = (g_69 |= (l_15[0] , ((func_16((func_19(l_6, l_23, g_2) & 2UL), g_2) , 1UL) && g_60[0][2][1])))), g_68[0][3][4].f1)))), l_6));
        for (g_5 = (-11); (g_5 == (-16)); --g_5)
        { 
            g_85 = (g_84[0] = (g_68[0][3][4].f3 = ((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((g_76 ^= l_15[0].f0), (safe_mod_func_uint16_t_u_u((!((l_80[1] , (l_80[1].f0 != (safe_mod_func_int16_t_s_s(g_66[3], l_15[0].f2)))) != 0xFFB89B2AL)), l_83)))), g_61[0])) != l_6)));
        }
    }
    for (g_69 = 13; (g_69 >= 15); ++g_69)
    { 
        int16_t l_93 = 0xE63EL;
        int32_t l_99 = 2L;
        g_5 = l_83;
        if (((-1L) | (4294967293UL <= ((safe_rshift_func_uint16_t_u_u((l_83 >= ((++g_66[0]) , ((l_15[0] , g_68[0][3][4].f3) , g_68[0][3][4].f1))), 8)) <= 0xDD6AA84C6C14278DLL))))
        { 
            int32_t l_92 = 2L;
            l_93 = l_92;
            g_2 = l_93;
            g_5 |= ((g_94 &= (g_68[0][3][4].f2 = 0xEDL)) <= 0xC8L);
        }
        else
        { 
            uint32_t l_107 = 5UL;
            l_15[0].f3.f3 = g_66[3];
            if ((g_68[0][3][4].f3 = (safe_add_func_uint32_t_u_u(((l_93 < (((safe_div_func_int64_t_s_s((l_99 ^= g_68[0][3][4].f1), (safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint32_t_u_u((((((g_68[0][3][4].f4 != (safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((-7L) ^ g_76), l_15[0].f2)), 0x83DC7C68L))) == 0x3F70368FL) != 0x2678A40DL) ^ l_93) < g_69), g_66[3])) | g_2))))) != 1UL) <= l_107)) == 1L), g_66[3]))))
            { 
                g_2 = (((0xFBL <= g_29) >= (l_15[0].f2 <= l_107)) && g_60[0][2][1]);
            }
            else
            { 
                uint64_t l_112 = 0xA766FE7F9DC645B2LL;
                g_2 = (safe_rshift_func_uint16_t_u_s((g_68[0][3][4].f2 & (safe_mul_func_uint16_t_u_u(g_66[2], 0x83B6L))), 11));
                l_112 = 0L;
            }
            l_15[0].f3.f3 = l_107;
        }
    }
    g_2 &= (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(0x8094L, (safe_rshift_func_int16_t_s_u(l_23, 0)))), ((g_68[0][1][1] , ((((g_68[0][3][4].f2 < 1UL) | l_119) & g_29) <= 0x54E63AD9904AA4E2LL)) | 255UL)));
    return l_120;
}



static struct S0  func_16(uint8_t  p_17, const uint16_t  p_18)
{ 
    int16_t l_55[3];
    int32_t l_67 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_55[i] = (-3L);
    l_55[2] = g_2;
    l_67 = (safe_lshift_func_uint16_t_u_u(((g_66[3] = (l_55[0] == (((l_55[2] ^ (p_17 = ((safe_add_func_int32_t_s_s((p_17 == (g_61[0]++)), ((safe_div_func_uint64_t_u_u(((((((5L ^ p_17) >= p_18) >= g_60[0][0][0]) | 65530UL) <= g_60[0][2][1]) != l_55[2]), g_2)) || g_60[0][0][2]))) & 4294967293UL))) , 0x010CA1D25F4349FELL) <= 0xF7D461CFA8ABF266LL))) && 0x261B24C01D5BC3FALL), 14));
    return g_68[0][3][4];
}



static int32_t  func_19(uint32_t  p_20, const uint64_t  p_21, int32_t  p_22)
{ 
    int64_t l_24 = 0L;
    union U1 l_28 = {0x534AL};
    int8_t l_30 = 0x2BL;
    int32_t l_31 = 0x11CA4B38L;
    int32_t l_54 = (-6L);
    l_24 = p_20;
    l_54 &= func_25((((0x5D088182L <= (((l_28 , p_22) && ((((l_31 ^= (((g_29 &= l_28.f0) < 0xA9B65CABL) ^ l_30)) > 1UL) , l_28.f2) & g_2)) > l_24)) | p_22) , 0xBC712BAD479EA408LL), g_5);
    return p_21;
}



static const int32_t  func_25(int64_t  p_26, int64_t  p_27)
{ 
    int32_t l_40 = 0x98A97D63L;
    int32_t l_41 = 0x71F8B108L;
    uint16_t l_53 = 65535UL;
    for (p_26 = (-6); (p_26 == 7); p_26 = safe_add_func_uint16_t_u_u(p_26, 1))
    { 
        uint8_t l_36 = 0UL;
        int32_t l_39 = 0L;
        int32_t l_52 = 0xED9A830FL;
        l_41 = (safe_add_func_int64_t_s_s(((l_40 = ((l_39 = ((((l_36 = g_2) > ((safe_sub_func_int32_t_s_s(0xB46F9F11L, g_5)) || (l_39 ^ 0x46L))) < 1L) | l_39)) < l_40)) , g_2), 18446744073709551615UL));
        l_40 = (safe_add_func_uint8_t_u_u((g_29 = (safe_mod_func_int8_t_s_s((l_41 = (l_39 = ((l_53 = (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((((safe_lshift_func_uint8_t_u_s(p_27, 1)) | 4294967289UL) == g_5) , g_5) <= 4294967286UL), p_27)), l_52))) && l_40))), p_27))), g_2));
    }
    return l_40;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_60[i][j][k], "g_60[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_68[i][j][k].f0, "g_68[i][j][k].f0", print_hash_value);
                transparent_crc(g_68[i][j][k].f1, "g_68[i][j][k].f1", print_hash_value);
                transparent_crc(g_68[i][j][k].f2, "g_68[i][j][k].f2", print_hash_value);
                transparent_crc(g_68[i][j][k].f3, "g_68[i][j][k].f3", print_hash_value);
                transparent_crc(g_68[i][j][k].f4, "g_68[i][j][k].f4", print_hash_value);
                transparent_crc(g_68[i][j][k].f5, "g_68[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
