// SPDX-License-Identifier: MIT
// cctest_csmith_98ee4fc7.c --- cctest case csmith_98ee4fc7 (csmith seed 2565754823)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4bc98126 */
/* @exp_ticks 0x319d */

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

// Options:   -s 2565754823 -o /tmp/csmith_gen_frm1ggq5/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
};
#pragma pack(pop)

struct S1 {
   int64_t  f0;
};

union U2 {
   int32_t  f0;
   struct S1  f1;
   const int64_t  f2;
   const int32_t  f3;
};


static uint64_t g_2 = 8UL;
static struct S1 g_5 = {4L};
static int32_t g_27 = (-9L);
static struct S0 g_41 = {5L};
static uint64_t g_49 = 0UL;
static int32_t g_60 = 0x8D7FF0BAL;
static uint32_t g_74 = 0UL;
static struct S1 g_89 = {8L};
static uint8_t g_100[3] = {255UL,255UL,255UL};
static uint16_t g_103 = 0UL;
static struct S1 g_104 = {-1L};
static int32_t g_137 = 0xF4A4090DL;
static int64_t g_147 = 9L;



static uint32_t  func_1(void);
static uint32_t  func_9(const uint64_t  p_10, const uint16_t  p_11, uint64_t  p_12, uint32_t  p_13, uint16_t  p_14);
static uint16_t  func_17(const uint32_t  p_18, struct S1  p_19);
static const uint32_t  func_20(int64_t  p_21, int32_t  p_22);




static uint32_t  func_1(void)
{ 
    struct S1 l_6 = {0x5934215E1ABE8F21LL};
    struct S1 l_7[2][4][4] = {{{{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL}},{{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL}},{{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL}},{{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL}}},{{{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL}},{{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL}},{{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL}},{{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL},{0xAA43B2B74C38B6B0LL}}}};
    int32_t l_8 = 0x9827359BL;
    uint32_t l_118 = 0x28EFC35FL;
    int32_t l_119 = (-1L);
    const int32_t l_135 = 0x64697844L;
    uint64_t l_136[1][4];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_136[i][j] = 1UL;
    }
    ++g_2;
    l_7[0][1][3] = (l_6 = g_5);
    if ((l_119 = (((g_2 || (((-1L) <= ((l_8 || ((func_9(l_8, l_8, g_2, l_7[0][1][3].f0, g_2) , l_8) ^ l_6.f0)) == 0x89CF69D4L)) , l_118)) <= (-7L)) == g_2)))
    { 
        uint16_t l_124[4] = {0xA347L,0xA347L,0xA347L,0xA347L};
        int32_t l_138 = (-2L);
        int i;
        l_138 |= ((safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint64_t_u_u(l_124[0], l_6.f0)) || ((g_137 ^= (safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((l_119 = ((safe_sub_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(1UL, l_124[0])), l_135)) != 0L) < 0x8834L), 2UL)) >= g_49)), g_89.f0)) ^ 65530UL), l_136[0][2]))) || (-1L))) ^ 0x11152AC100996282LL), g_103)) | l_124[0]);
    }
    else
    { 
        int32_t l_145 = 0L;
        const struct S1 l_149 = {7L};
        for (g_137 = (-14); (g_137 <= (-6)); g_137 = safe_add_func_uint64_t_u_u(g_137, 5))
        { 
            uint64_t l_146[1][5] = {{0x41C33414B7E93FE2LL,0x41C33414B7E93FE2LL,0x41C33414B7E93FE2LL,0x41C33414B7E93FE2LL,0x41C33414B7E93FE2LL}};
            struct S1 l_148 = {0x69592194A02220EFLL};
            int i, j;
            l_148 = ((safe_rshift_func_int16_t_s_u(g_2, (safe_sub_func_uint64_t_u_u(((l_119 |= ((0xF6EE45795A9035C0LL | l_145) | (g_147 = ((g_41 , l_146[0][1]) >= l_6.f0)))) , l_136[0][2]), l_146[0][1])))) , g_89);
            g_5 = l_149;
        }
    }
    return g_89.f0;
}



static uint32_t  func_9(const uint64_t  p_10, const uint16_t  p_11, uint64_t  p_12, uint32_t  p_13, uint16_t  p_14)
{ 
    int8_t l_28 = 0x76L;
    int32_t l_29 = 0xF4C9FF75L;
    int32_t l_38 = 0x03ADFE1DL;
    int32_t l_106[4];
    int16_t l_117 = 0x3A1BL;
    int i;
    for (i = 0; i < 4; i++)
        l_106[i] = 0L;
    l_106[3] = (safe_rshift_func_int8_t_s_s((func_17((((((0x6522L & (g_103 = (func_20((safe_mul_func_int8_t_s_s(g_5.f0, ((l_38 = (safe_mod_func_int64_t_s_s(((--p_13) == (l_29 = ((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((((l_28 | g_2) && l_28) , 0L), g_27)), 0xECB5CB1BEBA424ACLL)) <= 0x2196DB3533B016FELL) != 65535UL), l_28)) >= 0x2BL))), p_14))) == 0xF902L))), l_28) , g_27))) | g_41.f0) | p_14) ^ (-1L)) & g_41.f0), g_104) <= g_104.f0), 2));
    g_27 |= (safe_rshift_func_uint16_t_u_u(p_12, ((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_13, (safe_sub_func_uint64_t_u_u((l_117 = ((((safe_mul_func_uint16_t_u_u(((p_12 , g_74) & g_89.f0), 0xA2F2L)) ^ g_49) > p_11) <= 0xF8E08A2EL)), 0UL)))), g_103)) != g_100[2])));
    return l_117;
}



static uint16_t  func_17(const uint32_t  p_18, struct S1  p_19)
{ 
    struct S1 l_105 = {0L};
    l_105 = g_104;
    p_19 = (l_105 = g_5);
    for (l_105.f0 = 0; l_105.f0 < 3; l_105.f0 += 1)
    {
        g_100[l_105.f0] = 255UL;
    }
    return l_105.f0;
}



static const uint32_t  func_20(int64_t  p_21, int32_t  p_22)
{ 
    uint64_t l_42 = 1UL;
    int16_t l_43[5][2] = {{0x1BA8L,(-9L)},{(-9L),(-9L)},{(-3L),(-9L)},{(-9L),(-3L)},{(-9L),(-9L)}};
    int32_t l_70 = 0xA776A221L;
    int32_t l_97 = 0L;
    int32_t l_98 = 1L;
    int i, j;
    p_22 = ((g_2 ^ (g_5.f0 < (safe_div_func_uint8_t_u_u((((g_41 , 0x7FL) != p_21) , p_21), p_21)))) > l_42);
    for (g_5.f0 = 1; (g_5.f0 >= 0); g_5.f0 -= 1)
    { 
        union U2 l_44[3][2] = {{{0xF500C330L},{0xF500C330L}},{{0xF500C330L},{0xF500C330L}},{{0xF500C330L},{0xF500C330L}}};
        int32_t l_71 = 0x0FC3BC34L;
        int i, j;
        if ((l_44[2][0] , (safe_mul_func_uint8_t_u_u((g_49 ^= (safe_div_func_uint8_t_u_u(p_21, 255UL))), (safe_mul_func_uint16_t_u_u((p_22 , 0xD67FL), 0xB6A4L))))))
        { 
            uint32_t l_59 = 0x69673C82L;
            int32_t l_61 = 0x47EC8A5EL;
            p_22 = g_27;
            l_61 &= (g_27 <= (!(((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int16_t_s_s(g_2, (safe_div_func_uint32_t_u_u((0xE3L & (((l_59 == 8UL) , 0x408CDC70L) & l_43[2][0])), g_49)))) , l_44[2][0].f0) != l_43[2][1]), p_21)) || g_60) & p_22)));
            l_71 = (safe_lshift_func_uint8_t_u_s((l_70 = (((safe_add_func_uint16_t_u_u(g_60, p_22)) | (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((l_44[2][0] , (l_59 , p_21)), 8)), p_21))) && p_22)), l_61));
        }
        else
        { 
            uint32_t l_72 = 0xEDA74E99L;
            for (p_22 = 0; (p_22 <= 1); p_22 += 1)
            { 
                const int64_t l_73 = 0xB0F3EF28B5E68274LL;
                g_60 = (l_72 = 0x3897E00CL);
                return l_73;
            }
            g_74--;
        }
        g_27 |= ((l_70 = (safe_mod_func_int32_t_s_s((+(l_71 |= (((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_49, g_5.f0)), (safe_sub_func_int16_t_s_s(g_60, (p_21 <= 0UL))))), g_41.f0)) , g_49) , p_22))), l_43[4][0]))) || p_21);
        if (p_21)
        { 
            for (l_71 = 0; (l_71 <= 1); l_71 += 1)
            { 
                return p_22;
            }
        }
        else
        { 
            struct S1 l_88 = {0x0FE2C0A09E955DDCLL};
            if (p_21)
                break;
            g_60 = 1L;
            if (p_21)
            { 
                g_27 = g_74;
                if (l_70)
                    continue;
                g_89 = l_88;
            }
            else
            { 
                if (g_27)
                    break;
                if (l_71)
                    continue;
                if (p_21)
                    continue;
            }
        }
        for (g_89.f0 = 1; (g_89.f0 >= 0); g_89.f0 -= 1)
        { 
            int16_t l_90 = 0xAE86L;
            int32_t l_96 = (-1L);
            int32_t l_99 = (-2L);
            for (g_74 = 0; (g_74 <= 1); g_74 += 1)
            { 
                uint16_t l_91 = 0UL;
                l_70 = (p_22 &= 0x9DB6AB31L);
                ++l_91;
            }
            for (g_27 = 1; (g_27 >= 0); g_27 -= 1)
            { 
                p_22 ^= (-8L);
                p_22 = (safe_sub_func_uint8_t_u_u(g_74, 0xBEL));
            }
            g_100[1]++;
        }
    }
    return g_2;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_100[i], "g_100[i]", print_hash_value);

    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
