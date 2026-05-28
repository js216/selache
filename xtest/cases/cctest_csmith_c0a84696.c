// SPDX-License-Identifier: MIT
// cctest_csmith_c0a84696.c --- cctest case csmith_c0a84696 (csmith seed 3232253590)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd848d195 */
/* @exp_ticks 0x38ba */

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

// Options:   -s 3232253590 -o /tmp/csmith_gen_g_8shhm0/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   uint64_t  f1;
   int64_t  f2;
   int8_t  f3;
};

union U1 {
   int8_t  f0;
   struct S0  f1;
   struct S0  f2;
   int8_t  f3;
};

union U2 {
   int64_t  f0;
   int32_t  f1;
   uint64_t  f2;
};


static int32_t g_2 = 0L;
static uint32_t g_5 = 18446744073709551613UL;
static union U2 g_31 = {0L};
static uint32_t g_51 = 18446744073709551615UL;
static struct S0 g_55 = {250UL,0x5349DDA4ADCF8610LL,0L,-9L};
static int8_t g_69 = 0x2CL;
static uint16_t g_70 = 65530UL;
static uint32_t g_79 = 18446744073709551613UL;
static uint32_t g_80 = 18446744073709551615UL;
static int32_t g_83 = (-8L);
static uint16_t g_86 = 0xA505L;
static int8_t g_94[4] = {0x1DL,0x1DL,0x1DL,0x1DL};
static uint16_t g_95 = 65529UL;
static int32_t g_149 = 1L;
static uint16_t g_151 = 0x01D7L;
static union U1 g_214 = {1L};
static uint64_t g_267 = 0xFF29AA79E077B5E0LL;
static uint8_t g_270[4] = {0xAAL,0xAAL,0xAAL,0xAAL};
static int16_t g_287[5] = {0x99DCL,0x99DCL,0x99DCL,0x99DCL,0x99DCL};
static struct S0 g_288 = {0xE4L,0xC4F514575F8629F8LL,0x947E045539E86592LL,0x4AL};
static int32_t g_297 = 1L;
static int16_t g_317[1] = {6L};
static int32_t g_318 = 0x82138A2BL;
static int64_t g_320 = 0xBC0F6187655EF6E4LL;



static int32_t  func_1(void);
static uint8_t  func_20(uint32_t  p_21, uint64_t  p_22, struct S0  p_23);
static uint64_t  func_26(union U2  p_27, struct S0  p_28, uint16_t  p_29, struct S0  p_30);
static struct S0  func_32(int32_t  p_33, const uint64_t  p_34, int32_t  p_35, struct S0  p_36, int8_t  p_37);




static int32_t  func_1(void)
{ 
    int64_t l_12 = 2L;
    int32_t l_289 = 0L;
    int32_t l_319 = 0L;
    for (g_2 = 24; (g_2 <= (-25)); g_2--)
    { 
        ++g_5;
    }
    g_2 ^= (~(safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((l_12 = ((g_5 && 0x6C312FBB6BC3EC3DLL) | 1L)))), 3)));
    for (l_12 = (-12); (l_12 < (-23)); l_12--)
    { 
        uint32_t l_17 = 0UL;
        int32_t l_53 = 0xE12CDFD7L;
        int32_t l_313[3];
        uint16_t l_322 = 0UL;
        int i;
        for (i = 0; i < 3; i++)
            l_313[i] = 0xFC8C2E68L;
        if ((safe_mod_func_uint32_t_u_u(g_5, (((g_5 <= (l_17 = l_12)) == g_2) , 5UL))))
        { 
            uint32_t l_52 = 0x70C387C7L;
            int16_t l_54 = (-1L);
            l_289 = (safe_lshift_func_uint8_t_u_s((func_20(g_2, (safe_rshift_func_int16_t_s_s((func_26(g_31, func_32(((safe_rshift_func_int8_t_s_u(g_2, 1)) , (((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((((l_53 |= (safe_add_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((+g_51), l_52)) , g_31.f2), g_31.f2))) <= l_54) <= g_51), l_17)) < 0xEB5A40A7L), g_51)), g_31.f0)) > g_2) > g_31.f2)), g_31.f0, g_51, g_55, l_17), g_31.f2, g_55) != (-1L)), l_17)), g_288) <= 253UL), l_12));
            return l_53;
        }
        else
        { 
            uint16_t l_296 = 65531UL;
            uint16_t l_314 = 65531UL;
            g_297 &= (((((((l_12 != ((safe_mul_func_uint16_t_u_u((l_53 &= 0xBB06L), (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((g_270[0] ^ g_288.f0), (-5L))), 7)))) > l_296)) != g_214.f3) >= 1UL) & 0x1040B8976AF418E2LL) & l_296) >= g_70) && g_288.f2);
            l_53 &= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((+(safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_289 |= l_313[1]), l_314)), (l_12 && (l_314 | g_94[2])))), g_297))) , g_149), l_314)) != g_31.f0), 5)) >= g_267), l_314)), g_55.f1)) <= 1L);
            for (g_69 = 3; (g_69 >= 0); g_69 -= 1)
            { 
                int i;
                return g_270[g_69];
            }
        }
        for (g_5 = (-12); (g_5 >= 46); g_5 = safe_add_func_uint8_t_u_u(g_5, 6))
        { 
            int32_t l_321[3][4][1] = {{{0x3957BBCEL},{0x832C0FE8L},{0x3957BBCEL},{0x3957BBCEL}},{{0x832C0FE8L},{0x3957BBCEL},{0x3957BBCEL},{0x832C0FE8L}},{{0x3957BBCEL},{0x3957BBCEL},{0x832C0FE8L},{0x3957BBCEL}}};
            int i, j, k;
            l_322++;
        }
    }
    return g_287[0];
}



static uint8_t  func_20(uint32_t  p_21, uint64_t  p_22, struct S0  p_23)
{ 
    return p_22;
}



static uint64_t  func_26(union U2  p_27, struct S0  p_28, uint16_t  p_29, struct S0  p_30)
{ 
    int32_t l_73[3];
    uint8_t l_119 = 0x1EL;
    uint8_t l_120 = 1UL;
    int32_t l_144 = (-10L);
    int i;
    for (i = 0; i < 3; i++)
        l_73[i] = 0x63CC5DB0L;
    if (l_73[1])
    { 
        uint8_t l_76[1][4][4] = {{{0x67L,6UL,6UL,0x67L},{6UL,0x67L,6UL,6UL},{0x67L,0x67L,8UL,0x67L},{0x67L,6UL,6UL,0x67L}}};
        int32_t l_84[5] = {0x0D7C7E68L,0x0D7C7E68L,0x0D7C7E68L,0x0D7C7E68L,0x0D7C7E68L};
        int i, j, k;
        for (g_31.f1 = 0; (g_31.f1 > 12); g_31.f1 = safe_add_func_int32_t_s_s(g_31.f1, 9))
        { 
            int8_t l_85 = 0L;
            if (g_2)
            { 
                ++l_76[0][2][0];
                g_79 = p_28.f2;
                g_80++;
            }
            else
            { 
                return p_30.f0;
            }
            for (p_28.f0 = 0; (p_28.f0 <= 2); p_28.f0 += 1)
            { 
                g_86++;
            }
        }
    }
    else
    { 
        struct S0 l_89[1] = {{253UL,0UL,0L,0x8FL}};
        int32_t l_90 = 9L;
        int i;
        for (g_31.f0 = 0; (g_31.f0 <= 2); g_31.f0 += 1)
        { 
            int i;
            l_89[0] = g_55;
            l_90 = (l_73[g_31.f0] & 0x4FE20FE0L);
            for (p_28.f3 = 0; (p_28.f3 >= 0); p_28.f3 -= 1)
            { 
                uint8_t l_91 = 1UL;
                --l_91;
                if (g_55.f2)
                    break;
                if (p_28.f1)
                    continue;
            }
        }
    }
lbl_223:
    for (g_83 = 0; (g_83 <= 2); g_83 += 1)
    { 
        int32_t l_96 = 0x07823723L;
        int i;
        p_27.f1 = l_73[g_83];
        for (g_31.f0 = 2; (g_31.f0 >= 0); g_31.f0 -= 1)
        { 
            g_95 &= (g_94[1] &= l_73[1]);
            l_96 = 0x52390699L;
        }
    }
    if ((((safe_mul_func_uint16_t_u_u(0x9F93L, (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((l_73[1] != (+(p_30.f0 || g_31.f1))), 7)), p_28.f3)))) < 0x94L) , 0xABCDCAF5L))
    { 
        uint8_t l_121 = 0UL;
        int32_t l_150 = 0xB9243169L;
        int32_t l_154 = (-1L);
        struct S0 l_169 = {9UL,0UL,1L,1L};
        uint32_t l_207[5][3][4] = {{{4294967287UL,0xA140F996L,0x8E932EB6L,0x623E6BFFL},{4294967291UL,2UL,0x62810AE6L,1UL},{4294967288UL,4294967289UL,4294967295UL,1UL}},{{0x16A46236L,2UL,4294967293UL,0x623E6BFFL},{0UL,0xA140F996L,0x6D70E512L,0xCF8E74D0L},{0x6AE4A769L,0x3CAD433CL,0x623E6BFFL,0UL}},{{0x16A46236L,0xCF8E74D0L,0x16A46236L,4294967293UL},{2UL,0x0F2ED5B9L,0x62810AE6L,0x6AE4A769L},{0x0F2ED5B9L,0x3CAD433CL,4294967289UL,0x0F2ED5B9L}},{{4294967287UL,0UL,4294967289UL,0x623E6BFFL},{0x0F2ED5B9L,1UL,0x62810AE6L,2UL},{2UL,4294967289UL,0x16A46236L,4294967288UL}},{{0x16A46236L,4294967288UL,0x623E6BFFL,0x623E6BFFL},{0x6AE4A769L,0x6AE4A769L,0x6D70E512L,4294967291UL},{0UL,0x3CAD433CL,4294967293UL,0xA140F996L}}};
        union U1 l_210[1][3][2] = {{{{0x18L},{-1L}},{{-1L},{0x18L}},{{-1L},{-1L}}}};
        int i, j, k;
        for (g_70 = 0; (g_70 <= 3); g_70 += 1)
        { 
            struct S0 l_114 = {255UL,18446744073709551606UL,3L,0x55L};
            int i;
            g_31.f1 = ((safe_sub_func_int16_t_s_s((g_94[g_70] != (safe_mul_func_int16_t_s_s(((((g_83 = (safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((l_114 , ((l_114.f3 > ((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(p_28.f2, 5L)), p_28.f1)) < l_114.f0)) != l_119)) <= 0UL), 1)), 4294967294UL)), l_120))) , l_120) <= g_94[1]) < 0UL), 0x54ECL))), l_121)) ^ 0x0A635A0DCE6BA5C8LL);
        }
        if ((g_31.f1 ^= ((p_29 > p_29) < ((safe_div_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((0xEC30L < ((safe_lshift_func_uint16_t_u_s(l_119, p_30.f0)) > g_70)) < 0xE6L), l_121)) == l_121), g_2)) & l_73[2]))))
        { 
            int32_t l_142 = (-1L);
            uint16_t l_143 = 65535UL;
            struct S0 l_147 = {0x9AL,0x0F5FFFD36A2B0204LL,0x9850BAFF8C079A21LL,0L};
            int32_t l_148 = 0L;
            for (p_30.f0 = 0; (p_30.f0 <= 2); p_30.f0 += 1)
            { 
                int i;
                l_144 = (safe_lshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u((l_143 ^= (safe_add_func_uint64_t_u_u((l_73[p_30.f0] <= l_120), (g_55.f3 , (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(0xA529L, 0x8149L)) & p_28.f2) & l_142), g_51)), 65535UL)))))), p_30.f1)) < g_70), 10));
            }
            for (g_95 = 29; (g_95 != 55); g_95 = safe_add_func_int64_t_s_s(g_95, 1))
            { 
                g_55 = l_147;
            }
            g_151++;
        }
        else
        { 
            uint16_t l_155 = 0x03DDL;
            union U1 l_168 = {-1L};
            --l_155;
            g_55 = g_55;
            if ((((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(8UL, (safe_mul_func_uint16_t_u_u(((1UL ^ p_28.f1) <= (safe_rshift_func_uint16_t_u_s(((func_32((((safe_add_func_int8_t_s_s((l_168 , 1L), g_149)) >= g_55.f1) | 1UL), l_154, p_27.f1, l_169, p_30.f2) , 0xE1L) > g_95), 3))), p_28.f3)))), 8UL)) <= l_168.f3) >= p_28.f1))
            { 
                int8_t l_182 = 0x3FL;
                int32_t l_183[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_183[i] = 0x38469119L;
                l_168.f1 = (p_30 = func_32((p_27.f1 = (l_183[1] &= (safe_mod_func_int8_t_s_s((g_51 | ((((((safe_add_func_uint64_t_u_u(0x523078B0CAD11DC8LL, (safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((((((-1L) && (safe_rshift_func_int16_t_s_s(((g_69 |= ((safe_div_func_uint32_t_u_u(l_150, p_28.f3)) , g_55.f2)) > p_30.f0), g_95))) | l_182) , g_51) | g_55.f2), g_55.f1)), p_29)))) && 1L) || 0L) != 255UL) < l_169.f1) | 65530UL)), l_182)))), l_73[0], g_55.f1, p_28, p_30.f0));
                g_55 = func_32(l_119, g_94[2], g_80, p_28, l_183[1]);
            }
            else
            { 
                l_144 ^= ((safe_add_func_int16_t_s_s((((p_30.f1 , p_30) , (safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((((safe_mul_func_int16_t_s_s((-6L), (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((5L >= l_168.f3), l_121)), 11)))) > p_27.f1) , 0x3FL) && p_30.f1) && l_168.f3), 0)), l_120)), 5)) != g_79), 10)))), 8)), g_83)) || p_27.f1), 0xC4FA8936L))) < l_155), p_28.f1)) >= l_207[3][1][0]);
            }
        }
        for (g_55.f3 = 0; (g_55.f3 <= 2); g_55.f3 += 1)
        { 
            struct S0 l_216[2] = {{0x45L,0x22D53653626FD0A4LL,0x7B899A1C6C081EF3LL,0xA3L},{0x45L,0x22D53653626FD0A4LL,0x7B899A1C6C081EF3LL,0xA3L}};
            uint64_t l_224 = 1UL;
            int i;
            if (((l_210[0][1][1] , (l_73[g_55.f3] , g_86)) < (!(safe_add_func_uint8_t_u_u(((((((g_214 , p_30.f0) , 0xB83AL) & g_31.f1) == p_29) & 1L) >= g_151), (-3L))))))
            { 
                union U1 l_215 = {0xFDL};
                l_216[0] = func_32(g_55.f3, g_55.f3, l_73[2], (((((p_27.f0 = 0x6CA7198ECC7ADD91LL) || p_30.f2) , l_215) , 1UL) , g_55), p_30.f0);
                if (l_216[0].f3)
                    continue;
            }
            else
            { 
                g_31.f1 = ((g_55.f0 | (((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((l_154 = g_94[1]) & ((l_150 = (p_28.f3 ^ (safe_mod_func_uint32_t_u_u((g_51 != p_30.f3), g_55.f1)))) ^ p_30.f1)), g_80)), 10)) > g_94[2]) != 0x80L)) <= 1L);
                return g_149;
            }
            for (g_5 = 0; (g_5 <= 2); g_5 += 1)
            { 
                if (p_28.f2)
                    goto lbl_223;
                return p_27.f1;
            }
            g_149 &= (p_27.f1 = (g_31.f1 = (l_224 <= g_51)));
            for (g_31.f2 = 0; (g_31.f2 <= 2); g_31.f2 += 1)
            { 
                uint8_t l_235 = 255UL;
                l_144 = (safe_div_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(0x0087D275BA9C812FLL, g_5)) ^ 0x9C438BB6L) < ((safe_mul_func_uint16_t_u_u((p_29 &= (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_235, p_28.f3)), p_28.f3))), g_55.f1)) <= p_30.f0)), 65535UL));
            }
        }
    }
    else
    { 
        int64_t l_252[3];
        uint16_t l_253[5] = {0xE05BL,0xE05BL,0xE05BL,0xE05BL,0xE05BL};
        int32_t l_268 = 0x444A0E0BL;
        int i;
        for (i = 0; i < 3; i++)
            l_252[i] = 0x6FF864FF1D34AEDALL;
        for (g_214.f1.f0 = 0; (g_214.f1.f0 <= 3); g_214.f1.f0 += 1)
        { 
            int64_t l_241 = 0x7AF7898805535B23LL;
            int32_t l_247 = 0x24406AF2L;
            int64_t l_279 = 0L;
            int32_t l_286 = (-1L);
            if (((!(safe_sub_func_int32_t_s_s(0L, (safe_div_func_int8_t_s_s((l_241 != ((((l_253[4] ^= (((safe_div_func_int8_t_s_s(((~(safe_add_func_int16_t_s_s((l_247 = p_30.f3), (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(0L, 0x97L)), p_30.f2))))) > l_252[1]), p_28.f1)) >= 0x2621B001L) <= p_28.f3)) >= l_252[0]) && g_70) < g_69)), p_28.f2))))) , g_55.f1))
            { 
                return p_28.f0;
            }
            else
            { 
                int32_t l_258 = (-1L);
                int32_t l_269 = 0x545C8C14L;
                l_268 |= (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((l_258 > ((g_55.f3 , (safe_div_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_144 ^= (safe_mul_func_int16_t_s_s(g_86, (((p_28.f0 != 3UL) , g_267) >= g_214.f0)))), l_73[2])), (-3L))) < 1UL), 0xABL))) , p_27.f1)), p_27.f1)), g_94[2]));
                --g_270[0];
                l_144 ^= (l_286 = (safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((((9L >= 0x60EDE611L) | (safe_div_func_uint16_t_u_u(l_279, (l_247 = ((((safe_mod_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((p_30.f0 == 0xA3L), l_247)), p_28.f2)) ^ l_241) != g_94[0]), g_214.f3)) == 3UL) , 0xDC5E76BDL) , g_94[1]))))) >= 0x05L), 0x27A17F35A23FF211LL)), l_258)));
            }
            return g_80;
        }
    }
    return g_287[0];
}



static struct S0  func_32(int32_t  p_33, const uint64_t  p_34, int32_t  p_35, struct S0  p_36, int8_t  p_37)
{ 
    struct S0 l_58[5][4] = {{{4UL,0UL,0x351D5E8E05992E41LL,-1L},{4UL,0UL,0x351D5E8E05992E41LL,-1L},{0xEDL,1UL,6L,0L},{4UL,0UL,0x351D5E8E05992E41LL,-1L}},{{4UL,0UL,0x351D5E8E05992E41LL,-1L},{0xC9L,0xD23A2CC37069E5F9LL,0x6A002B50D22F7F1CLL,0x4FL},{0xC9L,0xD23A2CC37069E5F9LL,0x6A002B50D22F7F1CLL,0x4FL},{4UL,0UL,0x351D5E8E05992E41LL,-1L}},{{0xC9L,0xD23A2CC37069E5F9LL,0x6A002B50D22F7F1CLL,0x4FL},{4UL,0UL,0x351D5E8E05992E41LL,-1L},{0xC9L,0xD23A2CC37069E5F9LL,0x6A002B50D22F7F1CLL,0x4FL},{0xC9L,0xD23A2CC37069E5F9LL,0x6A002B50D22F7F1CLL,0x4FL}},{{4UL,0UL,0x351D5E8E05992E41LL,-1L},{4UL,0UL,0x351D5E8E05992E41LL,-1L},{0xEDL,1UL,6L,0L},{4UL,0UL,0x351D5E8E05992E41LL,-1L}},{{4UL,0UL,0x351D5E8E05992E41LL,-1L},{0xC9L,0xD23A2CC37069E5F9LL,0x6A002B50D22F7F1CLL,0x4FL},{0xC9L,0xD23A2CC37069E5F9LL,0x6A002B50D22F7F1CLL,0x4FL},{4UL,0UL,0x351D5E8E05992E41LL,-1L}}};
    uint32_t l_68 = 0x72F85266L;
    int i, j;
    g_69 = ((safe_mod_func_int32_t_s_s((((l_58[1][0] , (((g_55.f2 | (g_5 > ((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((l_68 = (+(safe_mod_func_int64_t_s_s(p_35, g_5)))) > p_34), p_36.f2)) < g_55.f0), 0L)) != p_36.f0))) | p_33) || g_2)) & p_36.f2) && p_36.f2), g_5)) != 0xA1A75C26L);
    g_70++;
    return g_55;
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
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_55.f2, "g_55.f2", print_hash_value);
    transparent_crc(g_55.f3, "g_55.f3", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f3, "g_214.f3", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_270[i], "g_270[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_287[i], "g_287[i]", print_hash_value);

    }
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_288.f1, "g_288.f1", print_hash_value);
    transparent_crc(g_288.f2, "g_288.f2", print_hash_value);
    transparent_crc(g_288.f3, "g_288.f3", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_317[i], "g_317[i]", print_hash_value);

    }
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
