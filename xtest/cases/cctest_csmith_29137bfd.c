// SPDX-License-Identifier: MIT
// cctest_csmith_29137bfd.c --- cctest case csmith_29137bfd (csmith seed 689142781)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8ae7477d */
/* @exp_ticks 0x3209 */

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

// Options:   -s 689142781 -o /tmp/csmith_gen_mysp4i9a/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int32_t  f0;
   uint32_t  f1;
};

struct S1 {
   uint32_t  f0;
   const uint32_t  f1;
   uint16_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const int16_t  f0;
};
#pragma pack(pop)

union U3 {
   struct S1  f0;
};

union U4 {
   struct S1  f0;
   uint32_t  f1;
   uint8_t  f2;
   int16_t  f3;
};

union U5 {
   int32_t  f0;
   uint16_t  f1;
};

union U6 {
   int32_t  f0;
   int32_t  f1;
};


static uint16_t g_3 = 65535UL;
static int32_t g_34 = (-1L);
static uint32_t g_35 = 18446744073709551615UL;
static uint32_t g_37 = 1UL;
static union U3 g_82 = {{0x11143DC2L,0x600A8D5EL,0xCB12L}};
static struct S0 g_165 = {0xC6406117L,0UL};
static union U5 g_166 = {-7L};
static uint16_t g_195 = 65534UL;
static union U6 g_231 = {0x2118C4A8L};
static uint8_t g_238 = 255UL;
static uint32_t g_306 = 0x50604591L;



static union U3  func_1(void);
static int32_t  func_6(struct S2  p_7);
static struct S2  func_8(struct S0  p_9, union U5  p_10, struct S1  p_11, int8_t  p_12, uint32_t  p_13);
static struct S0  func_14(union U4  p_15, int64_t  p_16, struct S0  p_17, int8_t  p_18, uint64_t  p_19);




static union U3  func_1(void)
{ 
    uint16_t l_2 = 8UL;
    union U4 l_20 = {{0xC6088B92L,0UL,5UL}};
    int32_t l_239 = (-9L);
    uint64_t l_240[2];
    uint8_t l_242 = 0x39L;
    uint8_t l_269[4][2] = {{2UL,0x0EL},{0x0EL,2UL},{0x0EL,0x0EL},{2UL,0x0EL}};
    int32_t l_270 = 3L;
    int32_t l_273 = (-1L);
    int32_t l_336 = 0xD96CFDBAL;
    union U3 l_337[2][4] = {{{{0xDA877698L,5UL,0xF892L}},{{0xDA877698L,5UL,0xF892L}},{{0xDA877698L,5UL,0xF892L}},{{0xDA877698L,5UL,0xF892L}}},{{{0xDA877698L,5UL,0xF892L}},{{0xDA877698L,5UL,0xF892L}},{{0xDA877698L,5UL,0xF892L}},{{0xDA877698L,5UL,0xF892L}}}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_240[i] = 0x4EC6952951BB2A34LL;
    if (l_2)
    { 
        --g_3;
    }
    else
    { 
        uint32_t l_33 = 18446744073709551615UL;
        struct S0 l_36 = {0xBB1300CAL,0xC47AA296L};
        l_239 = func_6(func_8(func_14(l_20, (safe_rshift_func_uint16_t_u_s(((g_3 = ((g_34 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((0x44L == (g_3 && (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(0x6D0F065FL, 0UL)), g_3)))), g_3)) < l_33), 15)), 7))) <= 0x00L)) ^ 0x279CL), g_35)), l_36, g_37, l_20.f0.f1), g_166, g_82.f0, l_36.f0, l_36.f0));
        for (l_2 = 0; (l_2 <= 1); l_2 += 1)
        { 
            uint32_t l_241 = 18446744073709551615UL;
            for (g_3 = 0; (g_3 <= 1); g_3 += 1)
            { 
                int i;
                g_231.f1 = (l_240[g_3] < (g_166 , l_240[l_2]));
            }
            l_239 = l_241;
            for (l_36.f1 = 0; (l_36.f1 <= 1); l_36.f1 += 1)
            { 
                int64_t l_254 = 0x3523AF13D7B9707ELL;
                int32_t l_255 = 0xA1D81846L;
                ++l_242;
                l_255 = (safe_add_func_uint8_t_u_u(l_241, ((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_166 , (g_166.f1 <= (((~((((safe_mod_func_uint8_t_u_u(1UL, l_254)) == l_241) && g_165.f0) , 0xC2EBL)) , g_34) & 65535UL))), 4294967293UL)), g_34)) == 0x88937E83L)));
            }
        }
    }
    for (g_3 = 8; (g_3 == 48); ++g_3)
    { 
        int32_t l_277[3][1];
        int32_t l_278 = 0x85E214C6L;
        uint8_t l_309 = 255UL;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_277[i][j] = 0xD85E0017L;
        }
    }
    l_336 ^= (l_239 = (((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((0x0AE27274L < l_20.f0.f1), 1)), ((((g_231.f0 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s((((0xAA23L <= ((safe_lshift_func_uint8_t_u_s((l_269[0][1] >= l_240[0]), g_238)) != l_270)) & 0UL) & g_165.f0), (-10L))), 15))) > 4294967295UL) == 9UL) | l_2))) <= l_242) ^ 0x3AL));
    return l_337[1][1];
}



static int32_t  func_6(struct S2  p_7)
{ 
    int32_t l_174 = 0L;
    union U4 l_189 = {{0x2DEF9370L,4294967290UL,65535UL}};
    struct S0 l_190 = {0x38293169L,0x20454707L};
    int32_t l_191 = 0x0D3CD378L;
    int32_t l_192 = 0xD115FE20L;
    uint8_t l_206 = 0x22L;
    if ((safe_div_func_uint8_t_u_u(g_82.f0.f2, (l_174 | ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((l_192 = (((safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((l_191 = (safe_add_func_int8_t_s_s(((func_14(l_189, g_82.f0.f1, l_190, g_166.f1, l_189.f0.f2) , p_7.f0) <= (-1L)), p_7.f0))) > l_190.f0) < 0UL), l_189.f0.f1)), g_82.f0.f0)), g_82.f0.f2)) < p_7.f0) == p_7.f0)) < 0UL), l_189.f0.f0)) , g_82.f0.f0), 1)) && 65535UL)))))
    { 
        int32_t l_193 = 0xA4FB355CL;
        int32_t l_194 = 0L;
        ++g_195;
    }
    else
    { 
        int8_t l_211 = 1L;
        int32_t l_225[5] = {0x8AC66AC9L,0x8AC66AC9L,0x8AC66AC9L,0x8AC66AC9L,0x8AC66AC9L};
        int i;
        if ((safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(252UL, l_206)) == 2L) <= (safe_rshift_func_uint16_t_u_u((((18446744073709551615UL & p_7.f0) <= 0xA388L) , 0UL), g_165.f0))), p_7.f0)), l_190.f0)) >= l_189.f0.f0), p_7.f0)))
        { 
            uint8_t l_216 = 6UL;
            g_34 = (l_216 |= ((safe_mod_func_uint16_t_u_u(3UL, (((--g_82.f0.f0) && (safe_lshift_func_int16_t_s_s(p_7.f0, l_189.f0.f2))) , 6L))) == g_3));
            l_192 ^= (safe_div_func_uint16_t_u_u(0x4307L, (safe_div_func_uint32_t_u_u((4294967295UL ^ (safe_sub_func_int32_t_s_s(((p_7.f0 != (safe_div_func_int8_t_s_s(l_189.f0.f0, 0x60L))) > p_7.f0), g_82.f0.f0))), 4294967295UL))));
        }
        else
        { 
            uint64_t l_226[1];
            int i;
            for (i = 0; i < 1; i++)
                l_226[i] = 0x6D4BB3A84E4E45ECLL;
            l_226[0]++;
        }
        l_192 = (safe_mod_func_int32_t_s_s((g_231 , 0x06D4C336L), (((((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((l_191 = (((g_238 = (p_7.f0 && (((safe_mul_func_int8_t_s_s(g_35, g_82.f0.f1)) , p_7.f0) || 0L))) >= 18446744073709551614UL) , p_7.f0)), l_211)), 0x01E95282L)) , l_225[0]) & g_166.f0) & (-1L)) , g_166.f1)));
    }
    return p_7.f0;
}



static struct S2  func_8(struct S0  p_9, union U5  p_10, struct S1  p_11, int8_t  p_12, uint32_t  p_13)
{ 
    union U5 l_167 = {0xF0A8A3E1L};
    int32_t l_170 = 0x749A0BCAL;
    struct S2 l_171 = {0xEC4CL};
    l_170 &= (p_10.f1 >= (l_167 , ((g_82.f0.f1 , (safe_rshift_func_int8_t_s_s(g_34, p_11.f0))) | g_166.f1)));
    return l_171;
}



static struct S0  func_14(union U4  p_15, int64_t  p_16, struct S0  p_17, int8_t  p_18, uint64_t  p_19)
{ 
    int32_t l_38[5] = {1L,1L,1L,1L,1L};
    int32_t l_94 = 9L;
    uint64_t l_164[4][1][4] = {{{0xA950BD7AEA954584LL,0xD8875C3FA49C8F8DLL,0xDD330705DEFB49F9LL,0xD8875C3FA49C8F8DLL}},{{0xD8875C3FA49C8F8DLL,0x9F9EEFC36F8D392ALL,0xDD330705DEFB49F9LL,0xDD330705DEFB49F9LL}},{{0xA950BD7AEA954584LL,0xA950BD7AEA954584LL,0xD8875C3FA49C8F8DLL,0xDD330705DEFB49F9LL}},{{18446744073709551609UL,0x9F9EEFC36F8D392ALL,18446744073709551609UL,0xD8875C3FA49C8F8DLL}}};
    int i, j, k;
    if ((p_17 , l_38[0]))
    { 
        int64_t l_45 = 0xDF20BE86DE1F1717LL;
        int32_t l_46 = (-10L);
        int32_t l_80[2][5];
        int16_t l_87[2];
        const uint8_t l_106 = 1UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_80[i][j] = 0xADB2F3DDL;
        }
        for (i = 0; i < 2; i++)
            l_87[i] = 1L;
        for (g_37 = (-17); (g_37 < 10); g_37 = safe_add_func_uint64_t_u_u(g_37, 3))
        { 
            int64_t l_58[2][3][3] = {{{3L,0x98E47BEBA6E32111LL,3L},{(-4L),(-4L),1L},{0x22B60D90C37C5082LL,3L,0x22B60D90C37C5082LL}},{{1L,(-4L),1L},{0x22B60D90C37C5082LL,3L,0x22B60D90C37C5082LL},{1L,(-4L),1L}}};
            int32_t l_66 = (-1L);
            union U6 l_79 = {0L};
            int16_t l_93 = 0xD9E4L;
            uint32_t l_123 = 7UL;
            int i, j, k;
            l_46 |= (g_34 = ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((0x6909L | (1L > g_34)) , g_37), l_45)) == 0x28AEL), 3)) <= l_38[0]));
            for (p_15.f0.f2 = 0; (p_15.f0.f2 < 60); p_15.f0.f2 = safe_add_func_int16_t_s_s(p_15.f0.f2, 9))
            { 
                uint32_t l_64 = 0xEC59C4D3L;
                int32_t l_65 = 1L;
                struct S0 l_81 = {0x870AF1AAL,1UL};
                l_46 = ((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_mul_func_int8_t_s_s((l_65 = (safe_sub_func_int32_t_s_s((((safe_div_func_uint32_t_u_u(((((((l_58[1][1][1] = g_3) <= (65534UL && ((safe_div_func_uint32_t_u_u((+(safe_mod_func_uint32_t_u_u((((4L & 0x55D89F82A4162A97LL) > g_35) >= p_16), g_37))), l_64)) || 8L))) > g_35) <= g_3) && l_38[2]) ^ g_37), g_37)) ^ (-5L)) != 0xEFFBB891L), p_15.f0.f2))), l_64)) <= l_66))), l_64)) < 0UL);
                l_80[0][1] &= ((((p_16 , ((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((-10L), 4)), (((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_45 | ((safe_rshift_func_int8_t_s_u(((p_18 ^= (safe_mul_func_uint8_t_u_u(((((l_79 , g_3) < l_38[0]) >= 0L) & 0UL), 0x19L))) < g_37), g_37)) > 0xD1L)), 0x5B36276AL)), p_16)) >= 8L) & l_45))) & 0xBA02L)) && 3L) >= l_46) ^ l_38[0]);
                return l_81;
            }
            if ((((((g_82 , ((0x2E35L < (safe_sub_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(p_15.f0.f1, (g_3 = p_18))) >= 0L), g_82.f0.f2))) > l_79.f1)) != l_38[2]) < l_87[1]) > g_37) | 0xE8DA2FB9L))
            { 
                uint64_t l_92 = 0x3D2D6DA1B12C1214LL;
                int32_t l_95 = 0x14CEA6EDL;
                g_34 &= (safe_sub_func_uint8_t_u_u((g_3 && ((safe_add_func_uint8_t_u_u(l_92, ((255UL || (g_35 ^ l_93)) == 1L))) , 0xB6E431BEC191E6A7LL)), l_79.f0));
                l_95 |= (p_16 || (p_16 && (g_37 ^ (l_94 = (p_15.f0.f1 , g_34)))));
            }
            else
            { 
                uint8_t l_101 = 249UL;
                int32_t l_112 = 0x466DEC56L;
                l_94 ^= (safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((!(l_101 = l_38[3])), (((safe_mul_func_uint8_t_u_u(p_17.f1, ((safe_lshift_func_uint8_t_u_u(l_106, 5)) > ((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((((safe_lshift_func_int16_t_s_s(0xAD14L, 5)) ^ l_112) && l_38[0]))), g_82.f0.f0)) <= l_93)))) > 4294967295UL) != 0L))), 3));
                g_34 = (safe_lshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((l_66 , ((0x93EF347DC9BE9680LL > (safe_lshift_func_int8_t_s_s((g_82.f0.f2 && (((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((p_18 = ((p_15.f0 , 0x6C347B9CL) && l_79.f1)), 0x58L)), l_58[1][1][1])) & 0xEBL) , (-7L)) > g_82.f0.f0) < 0xAF6BE207B948F0CDLL)), p_15.f0.f1))) != 0L)) , 0UL) ^ 0xC28541D7298C4F2CLL), g_37)), g_34));
                l_66 = (l_123 = g_35);
            }
        }
    }
    else
    { 
        const struct S2 l_128 = {7L};
        int32_t l_140[2][2][5] = {{{(-4L),(-4L),(-4L),(-4L),(-4L)},{0x3178D71AL,0x3178D71AL,0x3178D71AL,0x3178D71AL,0x3178D71AL}},{{(-4L),(-4L),(-4L),(-4L),(-4L)},{0x3178D71AL,0x3178D71AL,0x3178D71AL,0x3178D71AL,0x3178D71AL}}};
        int i, j, k;
        for (p_19 = 0; (p_19 <= 4); p_19 += 1)
        { 
            int i;
            for (g_35 = 0; (g_35 <= 4); g_35 += 1)
            { 
                int32_t l_139 = (-8L);
                int8_t l_159[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_159[i] = 0x2BL;
                g_34 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_128 , 0x7CL), 4)), 2));
            }
            l_94 = (safe_sub_func_int64_t_s_s(((l_38[p_19] || ((safe_add_func_int32_t_s_s((8UL > (l_38[p_19] == ((p_17.f1 = p_15.f0.f2) < 0L))), p_17.f0)) <= 0xA94DL)) || p_18), l_128.f0));
        }
        g_34 &= (p_15.f0.f1 < g_35);
    }
    l_164[3][0][1] = (0x6EF3L && p_15.f0.f2);
    return g_165;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_82.f0.f0, "g_82.f0.f0", print_hash_value);
    transparent_crc(g_82.f0.f1, "g_82.f0.f1", print_hash_value);
    transparent_crc(g_82.f0.f2, "g_82.f0.f2", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_166.f0, "g_166.f0", print_hash_value);
    transparent_crc(g_166.f1, "g_166.f1", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_231.f0, "g_231.f0", print_hash_value);
    transparent_crc(g_231.f1, "g_231.f1", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
