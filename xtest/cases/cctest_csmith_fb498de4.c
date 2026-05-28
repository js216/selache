// SPDX-License-Identifier: MIT
// cctest_csmith_fb498de4.c --- cctest case csmith_fb498de4 (csmith seed 4215901668)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc336e3c8 */
/* @exp_ticks 0xb65f */

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

// Options:   -s 4215901668 -o /tmp/csmith_gen_vujh2i7p/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int8_t  f1;
   const uint16_t  f2;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   int64_t  f1;
   int16_t  f2;
   const uint32_t  f3;
   uint32_t  f4;
};

union U2 {
   uint32_t  f0;
};

union U3 {
   int8_t  f0;
   int16_t  f1;
   uint64_t  f2;
   int64_t  f3;
   const uint8_t  f4;
};


static int32_t g_9 = (-6L);
static int32_t *g_8 = &g_9;
static int32_t g_14 = (-3L);
static union U2 g_16 = {0xEDADE098L};
static union U2 *g_15 = &g_16;
static uint16_t g_50[2] = {0xCDC1L,0xCDC1L};
static int64_t g_55 = 1L;
static union U3 g_63 = {9L};
static int32_t g_66[4] = {(-1L),(-1L),(-1L),(-1L)};
static int32_t *g_70 = &g_14;
static int32_t **g_69 = &g_70;
static const int32_t * const g_89[1] = {&g_14};
static const int32_t * const * const g_88 = &g_89[0];
static int32_t *g_90 = &g_66[2];
static union U3 *g_94 = &g_63;
static union U3 **g_93 = &g_94;
static uint32_t g_109[6] = {0x06BCA32DL,0x06BCA32DL,4294967295UL,0x06BCA32DL,0x06BCA32DL,4294967295UL};
static uint64_t g_119 = 0x59668C86622CCD07LL;
static uint64_t *g_118 = &g_119;
static int8_t g_154 = (-9L);
static int32_t g_155[2][2][2] = {{{(-1L),0L},{(-1L),0L}},{{(-1L),0L},{(-1L),0L}}};
static union U3 **g_162 = &g_94;
static int32_t g_172 = 5L;
static uint8_t g_182 = 0x31L;
static uint8_t g_187 = 0x11L;
static uint32_t g_235 = 0x9BC731BAL;
static int16_t g_292[6][5] = {{0L,0x9B3DL,0L,0x9B3DL,0L},{(-1L),(-1L),0L,0L,(-1L)},{0xD8C0L,0x9B3DL,0xD8C0L,0x9B3DL,0xD8C0L},{(-1L),0L,0L,(-1L),(-1L)},{0L,0x9B3DL,0L,0x9B3DL,0L},{(-1L),(-1L),0L,0L,(-1L)}};
static const int32_t *g_305 = &g_155[0][1][1];
static const int32_t **g_304[5] = {&g_305,&g_305,&g_305,&g_305,&g_305};
static const int32_t ***g_303 = &g_304[0];
static const int32_t ****g_302[1][5][3] = {{{(void*)0,&g_303,&g_303},{&g_303,&g_303,&g_303},{(void*)0,&g_303,&g_303},{&g_303,&g_303,&g_303},{(void*)0,&g_303,&g_303}}};
static union U2 g_313[5][4] = {{{0UL},{0x7BE7A95DL},{0UL},{0x7BE7A95DL}},{{0UL},{0x7BE7A95DL},{0UL},{0x7BE7A95DL}},{{0UL},{0x7BE7A95DL},{0UL},{0x7BE7A95DL}},{{0UL},{0x7BE7A95DL},{0UL},{0x7BE7A95DL}},{{0UL},{0x7BE7A95DL},{0UL},{0x7BE7A95DL}}};
static const union U2 *g_312 = &g_313[1][3];
static uint8_t g_328 = 255UL;
static int64_t g_378 = 0xF6B7DC391F126424LL;
static union U1 g_385 = {-4L};
static const int16_t *g_387 = &g_385.f2;
static const int16_t **g_386[4] = {&g_387,&g_387,&g_387,&g_387};
static uint32_t g_402 = 0x9098C4DFL;
static const int32_t g_486 = 0x8D195A07L;
static uint16_t g_675[7][2][6] = {{{0x7A95L,5UL,0xA165L,0x9F16L,65535UL,0xB7CBL},{2UL,0xA165L,1UL,0x9F16L,0x7A95L,0x7A95L}},{{0x7A95L,0x08E3L,0x08E3L,0x7A95L,0xA762L,8UL},{0xD62FL,2UL,0xB7CBL,0x973BL,1UL,5UL}},{{2UL,0x9F16L,0x5808L,65530UL,1UL,5UL},{0xA762L,2UL,0x7A95L,2UL,0xA762L,65530UL}},{{0x5808L,0x08E3L,0xF3D6L,8UL,0x7A95L,2UL},{0xF3D6L,0xA165L,0xA762L,0x08E3L,65535UL,2UL}},{{65530UL,5UL,0xF3D6L,0xF3D6L,5UL,65530UL},{65535UL,0x973BL,0x7A95L,1UL,0x5808L,5UL}},{{0x973BL,0xA762L,0x5808L,0xB7CBL,0x9F16L,5UL},{0x973BL,8UL,0xB7CBL,1UL,0xB7CBL,8UL}},{{65535UL,0x5808L,0x08E3L,0xF3D6L,8UL,0x7A95L},{65530UL,0xD62FL,1UL,0x08E3L,2UL,0xB7CBL}}};
static int32_t **g_688[2][2][3] = {{{(void*)0,(void*)0,(void*)0},{&g_90,&g_90,&g_90}},{{(void*)0,(void*)0,(void*)0},{&g_90,&g_90,&g_90}}};
static int32_t **g_689 = &g_90;
static struct S0 g_726[4] = {{0x311FFD93L,0x0FL,1UL},{0x311FFD93L,0x0FL,1UL},{0x311FFD93L,0x0FL,1UL},{0x311FFD93L,0x0FL,1UL}};
static int64_t g_790 = 1L;
static int16_t **g_825 = (void*)0;
static union U3 g_830 = {0L};
static int8_t ** const g_883 = (void*)0;
static uint64_t g_989 = 1UL;
static union U3 *** const g_1025[5] = {&g_162,&g_162,&g_162,&g_162,&g_162};
static union U3 *** const *g_1024 = &g_1025[0];
static uint32_t g_1124[7][7][5] = {{{0xCBF7E602L,1UL,0x89464B99L,0xB55D1F46L,0UL},{4294967293UL,0x020CE607L,4294967292UL,0x4A3F727EL,0x0933AA07L},{0x89464B99L,0x3F39C4BBL,0xC9241FC9L,0xA494E054L,1UL},{0x47310182L,4294967290UL,0xF34B36AFL,0UL,7UL},{0x16F0AA4BL,0xC4DF1EB6L,0x6269F40DL,0x02B15783L,0xB55D1F46L},{0UL,1UL,0x020CE607L,4294967291UL,0x5195B55DL},{5UL,1UL,0UL,0x91FF6BD4L,4294967295UL}},{{0xFEA2BA86L,0x3BE56CC2L,6UL,4294967295UL,4294967287UL},{1UL,0UL,7UL,0x16F0AA4BL,0x12077D24L},{7UL,4294967295UL,4294967295UL,0xFEA2BA86L,4294967292UL},{0UL,0xC745E898L,0x89464B99L,0UL,0x12077D24L},{0x020CE607L,0xFEA2BA86L,0x40CB8CDDL,0xE001DFC1L,4294967287UL},{0x12077D24L,0UL,0x3EDCF542L,1UL,0x91FF6BD4L},{4294967287UL,6UL,1UL,0x3BE56CC2L,4294967290UL}},{{0x4B013808L,0xFCD8D32CL,0UL,4294967295UL,0x9E4EEE1BL},{6UL,4294967291UL,4294967292UL,0xE8CFA2E4L,9UL},{0xB55D1F46L,0xC4DF1EB6L,4294967295UL,4294967290UL,7UL},{4294967295UL,4294967295UL,0x897A3360L,0x5195B55DL,0x1EDD8377L},{4294967291UL,0x91FF6BD4L,4294967290UL,0x89464B99L,1UL},{4294967288UL,0x20F81814L,4294967295UL,4294967295UL,0x20F81814L},{6UL,0xBEED09B4L,1UL,4294967295UL,0xCAE8657BL}},{{0x7F7053F3L,4294967286UL,0xE8BEBF18L,4294967287UL,0x020CE607L},{0xBF4F4C27L,0x61203BC9L,0xD0E10345L,0xFCD8D32CL,0x69F019BFL},{0x7F7053F3L,0xE32D56CFL,0x9B9E59A1L,0xBD4D5E8BL,4294967288UL},{6UL,1UL,4294967290UL,6UL,0xD0E10345L},{4294967288UL,3UL,0xE001DFC1L,0xF34B36AFL,4294967295UL},{4294967291UL,4294967295UL,7UL,0UL,0UL},{4294967295UL,0UL,4294967293UL,9UL,4294967293UL}},{{0xB55D1F46L,0xC9241FC9L,0x84AB5302L,0x12077D24L,7UL},{6UL,0x020CE607L,4294967294UL,0x1EDD8377L,1UL},{0x4B013808L,6UL,6UL,4294967289UL,0xA494E054L},{4294967287UL,1UL,0xE32D56CFL,4294967288UL,0xE32D56CFL},{0x12077D24L,0x12077D24L,1UL,0x3C824C48L,0x3FAF1768L},{0x020CE607L,0x43FC8E14L,9UL,0x86C4FF1FL,6UL},{0UL,1UL,1UL,4294967295UL,0x16F0AA4BL}},{{7UL,0x43FC8E14L,1UL,0xE32D56CFL,0x4A3F727EL},{1UL,0x12077D24L,0UL,0x3EDCF542L,1UL},{4294967287UL,1UL,0xE8CFA2E4L,0xE8BEBF18L,0x47310182L},{0x6B37A1C9L,6UL,0x3F39C4BBL,0UL,0x86B23BCBL},{0xF34B36AFL,0x020CE607L,0x1EDD8377L,6UL,0UL},{0xD0E10345L,0xC9241FC9L,0xDBFBB004L,0x6B37A1C9L,0x4651EF9AL},{1UL,0UL,0UL,4294967292UL,4294967295UL}},{{4294967295UL,4294967295UL,0xFCD8D32CL,1UL,4294967292UL},{0x0933AA07L,3UL,0x7F7053F3L,0UL,0UL},{0x61203BC9L,1UL,0x61203BC9L,0x3A9754ABL,6UL},{0x1EDD8377L,0xE32D56CFL,4294967287UL,0xE001DFC1L,4294967295UL},{0xC4DF1EB6L,0x4651EF9AL,0xD0E10345L,0xE0FB2A27L,0UL},{4294967287UL,4294967293UL,4294967287UL,4294967295UL,0xF34B36AFL},{1UL,1UL,0x4651EF9AL,0x3C824C48L,0xBF4F4C27L}}};
static struct S0 *g_1188 = (void*)0;
static struct S0 **g_1187 = &g_1188;
static uint16_t g_1199 = 0x999DL;
static int64_t *g_1223[1][3][2] = {{{&g_63.f3,&g_63.f3},{&g_55,&g_63.f3},{&g_63.f3,&g_55}}};
static uint8_t *g_1334 = &g_187;
static uint8_t **g_1333 = &g_1334;
static const int32_t *g_1343[2][2][1] = {{{&g_172},{&g_172}},{{&g_172},{&g_172}}};
static union U1 *g_1367 = (void*)0;
static union U1 * const *g_1366 = &g_1367;
static union U3 ***g_1373 = &g_162;
static union U3 ****g_1372 = &g_1373;
static union U3 *****g_1371 = &g_1372;
static int32_t g_1393 = 0L;
static union U2 **g_1414 = &g_15;
static union U2 *** const g_1413 = &g_1414;
static uint16_t g_1433[4] = {2UL,2UL,2UL,2UL};
static int64_t g_1504 = 0xD2F5EF35E51B8E1BLL;
static union U3 ****g_1531 = (void*)0;
static int32_t ***g_1559 = &g_689;
static int32_t ****g_1558[4] = {&g_1559,&g_1559,&g_1559,&g_1559};
static uint32_t g_1599[6][3] = {{0xEC533A98L,4294967294UL,0xEC533A98L},{4294967295UL,0xD6975E97L,0UL},{4294967295UL,4294967295UL,0xD6975E97L},{0xEC533A98L,0xD6975E97L,0xD6975E97L},{0xD6975E97L,4294967294UL,0UL},{0xEC533A98L,4294967294UL,0xEC533A98L}};
static uint32_t g_1632 = 1UL;
static uint32_t *g_1641 = (void*)0;
static uint32_t **g_1640 = &g_1641;



static uint16_t  func_1(void);
static const int32_t * func_2(int32_t * p_3, int32_t * p_4, const int32_t * p_5, int32_t  p_6, int32_t * p_7);
static union U2  func_18(int32_t ** p_19, int32_t * const * p_20, int32_t  p_21, int32_t * p_22, uint16_t  p_23);
static int32_t * func_26(const uint16_t  p_27);
static struct S0  func_28(union U2 ** const  p_29, int32_t * p_30, uint64_t  p_31);
static union U2 ** func_32(uint32_t  p_33, const union U2 * p_34, int16_t  p_35, uint64_t  p_36);
static union U2  func_37(int32_t * p_38, int32_t * p_39, union U2 ** p_40, uint8_t  p_41);
static int32_t * func_42(int32_t ** p_43, uint16_t  p_44, int32_t ** p_45, uint16_t  p_46, const int32_t * const * const  p_47);




static uint16_t  func_1(void)
{ 
    int32_t *l_10 = &g_9;
    int32_t *l_13 = &g_14;
    int32_t ***l_1407[4][6][5] = {{{&g_69,&g_69,&g_69,&g_69,&g_69},{(void*)0,&g_69,&g_69,(void*)0,&g_69},{&g_69,&g_69,&g_69,&g_69,(void*)0},{&g_69,(void*)0,(void*)0,&g_69,&g_69},{&g_69,&g_69,&g_69,&g_69,&g_69},{(void*)0,(void*)0,(void*)0,&g_69,&g_69}},{{&g_69,(void*)0,&g_69,&g_69,&g_69},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_69,(void*)0,&g_69,&g_69,&g_69},{&g_69,(void*)0,&g_69,&g_69,&g_69},{&g_69,&g_69,(void*)0,&g_69,&g_69},{&g_69,(void*)0,&g_69,&g_69,(void*)0}},{{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_69,&g_69,&g_69,(void*)0,(void*)0},{&g_69,&g_69,&g_69,&g_69,&g_69},{(void*)0,&g_69,&g_69,&g_69,&g_69},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_69,&g_69,(void*)0,(void*)0,&g_69}},{{&g_69,&g_69,&g_69,&g_69,&g_69},{(void*)0,&g_69,(void*)0,&g_69,&g_69},{&g_69,(void*)0,&g_69,&g_69,&g_69},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_69,(void*)0,&g_69,&g_69,(void*)0},{&g_69,&g_69,&g_69,&g_69,&g_69}}};
    uint16_t l_1422[5][7][5] = {{{0UL,0xE2C5L,65535UL,0xE2C5L,0UL},{65529UL,0xA298L,0xF2E2L,1UL,65529UL},{4UL,0x2BB4L,0x54ECL,65535UL,0x538CL},{0xA298L,0UL,1UL,65529UL,0x1409L},{0x709EL,65529UL,65535UL,1UL,0x29C2L},{0x1409L,65534UL,1UL,0xF2E2L,65529UL},{0x031CL,1UL,0x031CL,1UL,4UL}},{{65535UL,0UL,0xF2E2L,65529UL,65535UL},{0UL,65530UL,65535UL,65529UL,65535UL},{0x1409L,0x1409L,0xF2E2L,65535UL,0xA298L},{1UL,65535UL,0x031CL,65530UL,0x538CL},{65529UL,65535UL,1UL,0UL,65535UL},{65535UL,65535UL,65535UL,0x2BB4L,65535UL},{65534UL,0x1409L,1UL,1UL,65529UL}},{{1UL,65530UL,4UL,65530UL,1UL},{65534UL,0UL,65529UL,65535UL,0x1409L},{65535UL,1UL,65535UL,65529UL,0xEE5CL},{65529UL,65534UL,1UL,0UL,0x1409L},{1UL,65529UL,0x54ECL,1UL,1UL},{0x1409L,1UL,1UL,65529UL,65529UL},{0UL,1UL,0UL,1UL,65535UL}},{{65535UL,65529UL,0xF2E2L,0UL,65535UL},{0x031CL,65530UL,0x538CL,65529UL,0x538CL},{0x1409L,65529UL,0xF2E2L,65535UL,0xA298L},{0x709EL,65535UL,0UL,65530UL,65535UL},{65529UL,65535UL,1UL,1UL,65535UL},{0x538CL,65535UL,0x54ECL,0x2BB4L,4UL},{65534UL,65529UL,1UL,0UL,65529UL}},{{0x29C2L,65530UL,65535UL,65530UL,0x29C2L},{65534UL,65529UL,65529UL,65535UL,0x1409L},{0x538CL,1UL,4UL,65529UL,0UL},{65529UL,1UL,1UL,65529UL,0x1409L},{0x709EL,65529UL,65535UL,1UL,0x29C2L},{0x1409L,65534UL,1UL,0xF2E2L,65529UL},{0x031CL,1UL,0x031CL,1UL,4UL}}};
    int32_t l_1424 = (-1L);
    int32_t l_1427 = 6L;
    int32_t l_1431 = (-1L);
    int32_t l_1432[3];
    union U2 *l_1453[5];
    union U2 *l_1454 = &g_313[4][1];
    int8_t **l_1461 = (void*)0;
    int32_t l_1464[1];
    int32_t ****l_1498[6] = {&l_1407[3][0][0],&l_1407[3][0][0],&l_1407[3][0][0],&l_1407[3][0][0],&l_1407[3][0][0],&l_1407[3][0][0]};
    union U3 ****l_1530 = &g_1373;
    uint32_t l_1555 = 1UL;
    uint8_t l_1581 = 0xFEL;
    int32_t * const * const l_1585 = (void*)0;
    int32_t * const * const *l_1584 = &l_1585;
    uint32_t l_1619 = 18446744073709551609UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1432[i] = (-6L);
    for (i = 0; i < 5; i++)
        l_1453[i] = &g_16;
    for (i = 0; i < 1; i++)
        l_1464[i] = 0L;
    return (*l_10);
}



static const int32_t * func_2(int32_t * p_3, int32_t * p_4, const int32_t * p_5, int32_t  p_6, int32_t * p_7)
{ 
    union U2 **l_17 = &g_15;
    int32_t *l_25 = &g_14;
    int32_t **l_24 = &l_25;
    int32_t l_48 = (-4L);
    uint16_t *l_49 = &g_50[0];
    const int32_t * const l_52 = &g_14;
    const int32_t * const * const l_51[5] = {&l_52,&l_52,&l_52,&l_52,&l_52};
    int32_t *l_53 = &g_14;
    int32_t l_323 = 0xB7BFBE90L;
    int16_t l_1125 = (-1L);
    int32_t ***l_1243 = &l_24;
    int32_t ***l_1244 = &g_69;
    int16_t l_1245 = (-4L);
    struct S0 l_1260[6] = {{3L,-2L,0x2058L},{3L,-2L,0x2058L},{3L,-2L,0x2058L},{3L,-2L,0x2058L},{3L,-2L,0x2058L},{3L,-2L,0x2058L}};
    struct S0 ** const l_1291 = &g_1188;
    uint32_t l_1316 = 0UL;
    int i;
    (*l_17) = g_15;
    (*l_1244) = ((*l_1243) = (func_18(l_24, &l_25, p_6, func_26(((*g_8) & (((g_9 <= (func_28(func_32((func_37(func_42(&l_25, ((*l_49) &= l_48), &l_25, p_6, l_51[2]), l_53, l_17, p_6) , g_14), g_312, p_6, l_48), (*l_24), l_323) , l_1125)) ^ 0x29L) != l_48))), g_292[4][3]) , &l_53));
    if (g_154)
        goto lbl_1246;
lbl_1246:
    for (g_385.f4 = 0; (g_385.f4 <= 0); g_385.f4 += 1)
    { 
        (*g_8) |= l_1245;
        return p_4;
    }
    (*g_689) = &l_48;
    for (g_1199 = 12; (g_1199 == 31); g_1199 = safe_add_func_uint64_t_u_u(g_1199, 7))
    { 
        union U3 l_1254 = {0x85L};
        int32_t l_1265 = (-1L);
        union U3 * const *l_1297 = &g_94;
        union U3 * const **l_1296 = &l_1297;
        uint64_t * const *l_1311 = &g_118;
        int32_t l_1326 = 0xFD79F87CL;
        for (g_830.f3 = 0; (g_830.f3 <= (-19)); g_830.f3 = safe_sub_func_uint16_t_u_u(g_830.f3, 1))
        { 
            uint16_t l_1255[1][3];
            struct S0 **l_1272 = &g_1188;
            union U2 l_1279 = {7UL};
            uint16_t l_1286[7][6] = {{0x4D22L,9UL,0x4D22L,0xFAF4L,0xFAF4L,0x4D22L},{0x917DL,0x917DL,0xFAF4L,65533UL,0xFAF4L,0x917DL},{0xFAF4L,9UL,65533UL,65533UL,0x917DL,0x4D22L},{0xFAF4L,0x4D22L,9UL,0x4D22L,0xFAF4L,0xFAF4L},{65533UL,0x4D22L,0x4D22L,65533UL,0x917DL,65533UL},{65533UL,0x917DL,65533UL,0x4D22L,0x4D22L,65533UL},{0xFAF4L,0xFAF4L,0x4D22L,9UL,0x4D22L,0xFAF4L}};
            uint16_t *l_1288 = &g_675[3][0][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1255[i][j] = 0xF8F7L;
            }
            (*g_90) |= ((safe_rshift_func_uint16_t_u_s(((((*l_53) = (((*g_8) = (~(l_1254 , l_1255[0][0]))) , (safe_rshift_func_uint8_t_u_u((0xAB4BL < (safe_sub_func_uint32_t_u_u((((*p_7) < (l_1260[4] , (*p_3))) < (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((g_675[3][0][1] = (((((*l_49)--) | (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(0x8DL, g_109[3])) != (*g_118)), 0xD4B105F6L))) <= l_1254.f4) & p_6)), p_6)) | 0x86L), l_323))), l_1255[0][0]))), 3)))) , l_1272) != (void*)0), (*g_387))) < l_1260[4].f2);
        }
    }
    return p_4;
}



static union U2  func_18(int32_t ** p_19, int32_t * const * p_20, int32_t  p_21, int32_t * p_22, uint16_t  p_23)
{ 
    const uint32_t l_1242 = 18446744073709551606UL;
    for (g_830.f3 = 6; (g_830.f3 >= (-3)); --g_830.f3)
    { 
        (*g_90) |= l_1242;
    }
    return (*g_15);
}



static int32_t * func_26(const uint16_t  p_27)
{ 
    int32_t l_1126 = 0x3AECF292L;
    int32_t *l_1127 = (void*)0;
    int32_t *l_1128[5][6][3] = {{{&g_172,&g_66[2],&g_66[2]},{&g_9,&g_9,&g_172},{&g_66[2],(void*)0,&g_9},{&g_9,&g_66[0],&g_66[2]},{&g_9,(void*)0,&g_172},{&g_9,&g_66[0],(void*)0}},{{(void*)0,(void*)0,&g_172},{&g_172,&g_9,&g_9},{&g_9,&g_66[2],&g_172},{&g_66[2],(void*)0,(void*)0},{&g_66[2],&g_9,&g_172},{&g_9,&g_9,&g_9}},{{&g_172,&g_66[2],&g_66[2]},{(void*)0,&g_9,&g_9},{&g_9,&g_9,&g_66[0]},{&g_9,(void*)0,&g_9},{&g_9,&g_172,&g_66[2]},{&g_66[2],&g_66[1],&g_9}},{{&g_9,&g_66[2],&g_172},{&g_172,&g_172,(void*)0},{&g_66[2],&g_172,&g_172},{&g_9,&g_66[2],&g_9},{&g_9,&g_66[1],&g_172},{(void*)0,&g_172,(void*)0}},{{&g_9,(void*)0,&g_172},{&g_172,&g_9,&g_66[2]},{&g_9,&g_9,&g_9},{(void*)0,&g_66[2],&g_172},{&g_9,&g_9,&g_66[2]},{&g_9,&g_9,&g_66[1]}}};
    int32_t l_1129[7][4][3] = {{{0x202FD0B4L,0x87C13195L,0xEADEA3E5L},{0L,1L,0xD072BE74L},{0xDEADD033L,0x87C13195L,0x242DC6D9L},{(-5L),0x422B0940L,0x242DC6D9L}},{{0x48478F73L,(-5L),0xD072BE74L},{0xA62B714EL,0xA62B714EL,0xEADEA3E5L},{0x48478F73L,0xDEADD033L,1L},{(-5L),0xDEADD033L,9L}},{{0xDEADD033L,0xA62B714EL,(-1L)},{0L,(-5L),9L},{0x202FD0B4L,0x422B0940L,1L},{0x202FD0B4L,0x87C13195L,0xEADEA3E5L}},{{0L,1L,0xD072BE74L},{0xDEADD033L,0x87C13195L,0x242DC6D9L},{(-5L),0x422B0940L,0x242DC6D9L},{0x48478F73L,(-5L),0xD072BE74L}},{{0xA62B714EL,0xA62B714EL,0xEADEA3E5L},{0x48478F73L,0xDEADD033L,1L},{(-5L),0xDEADD033L,9L},{0xDEADD033L,0xA62B714EL,(-1L)}},{{0L,(-5L),9L},{0x202FD0B4L,0x422B0940L,1L},{0x202FD0B4L,0x87C13195L,0xEADEA3E5L},{0L,1L,0xD072BE74L}},{{0xDEADD033L,0x87C13195L,0x242DC6D9L},{0x4796E49AL,1L,0L},{(-4L),0x4796E49AL,0x87C13195L},{0L,0L,0xA62B714EL}}};
    uint64_t l_1130 = 0xEEB28D594C191AB6LL;
    uint32_t *l_1137[4] = {&g_402,&g_402,&g_402,&g_402};
    int64_t *l_1157 = (void*)0;
    int64_t *l_1158 = (void*)0;
    int64_t *l_1159 = &g_378;
    int8_t *l_1161 = &g_63.f0;
    int8_t **l_1160 = &l_1161;
    union U3 **l_1169 = &g_94;
    uint64_t l_1176 = 18446744073709551610UL;
    struct S0 **l_1189 = &g_1188;
    int32_t **l_1195 = &g_70;
    const int32_t * const * const l_1196 = &g_305;
    uint32_t l_1207 = 0x5289A976L;
    uint16_t l_1216 = 0xD7FCL;
    int32_t **l_1227 = &g_70;
    uint64_t *l_1233 = &g_63.f2;
    int i, j, k;
    l_1130++;
    if ((((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s(((g_1124[2][3][4] = 0xA7122D51L) != 4294967295UL), (+(((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((((((safe_sub_func_int32_t_s_s((0xDAL > ((safe_div_func_int64_t_s_s(((*l_1159) ^= ((safe_mod_func_uint32_t_u_u(g_830.f0, (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((**g_88) , (g_119 && g_14)), 15)) == p_27), g_63.f0)))) & g_50[0])), p_27)) , 0x77L)), g_50[0])) && 0xDF467D40A66B63B9LL) , l_1160) == &l_1161) && p_27), 2)), 13)), p_27)), p_27)) >= (*g_8)) <= g_14)))), g_63.f3)) , p_27) , 0x54878989L))
    { 
        union U3 **l_1168 = &g_94;
        int32_t l_1170 = 1L;
        int8_t l_1175 = (-1L);
        uint16_t *l_1177 = &g_675[6][1][0];
        int8_t l_1178 = (-7L);
        const int32_t l_1181[1] = {(-1L)};
        struct S0 **l_1186 = (void*)0;
        int32_t **l_1194 = (void*)0;
        uint16_t *l_1197 = &g_50[1];
        uint16_t *l_1198 = &g_1199;
        uint64_t *l_1200 = &g_63.f2;
        int32_t l_1201 = (-1L);
        int32_t l_1203 = 0xBE1F2DF6L;
        int32_t l_1204 = 0x0E6E1FC2L;
        int32_t l_1205 = 0x183EFF5BL;
        int32_t l_1206[7][5] = {{0x0E6055FCL,1L,0x05740B6BL,1L,0x0E6055FCL},{0L,0x1A910347L,1L,0xA622F559L,1L},{0x80409E4AL,0x80409E4AL,0x05740B6BL,0x0E6055FCL,8L},{0x1A910347L,0L,0L,0x1A910347L,1L},{1L,0x0E6055FCL,0x14D7393CL,0x14D7393CL,0x0E6055FCL},{1L,0L,0xB8DC2D83L,0x0D98D9FCL,0x0D98D9FCL},{7L,0x80409E4AL,7L,0x14D7393CL,0x05740B6BL}};
        int i, j;
        (*g_8) ^= ((safe_div_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s(0x8237L, (l_1168 != l_1169))) >= ((((l_1170 >= ((*l_1177) |= (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((((**l_1160) = (((*g_118) ^= l_1175) ^ ((0xE81BL && l_1175) , l_1176))) != 0x3FL), 0)) || g_726[1].f1), 13)))) > 0xAB4A7D00L) & l_1178) == g_292[2][4])), g_292[2][3])) , 0xB4F88F0EL);
        if (g_14)
            goto lbl_1202;
lbl_1202:
        (*l_1169) = ((safe_add_func_uint32_t_u_u((l_1201 ^= (((((*l_1177) &= p_27) > (l_1181[0] || l_1175)) <= ((((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((l_1186 != (l_1189 = g_1187)), ((*l_1200) = (safe_rshift_func_uint16_t_u_s(((*l_1198) = ((*l_1197) |= ((safe_add_func_int64_t_s_s((g_790 = ((((*g_118) = (func_28(&g_15, func_42(l_1194, g_830.f0, l_1195, l_1170, l_1196), p_27) , 18446744073709551611UL)) > 0x873F0BF6823300CBLL) >= g_726[1].f1)), g_155[1][1][0])) | 1UL))), p_27))))), g_292[2][1])) & l_1181[0]) , 65526UL) & p_27)) & g_328)), g_385.f2)) , (void*)0);
        ++l_1207;
    }
    else
    { 
        int64_t l_1210 = 0x04D5E1BF045C5EBCLL;
        int16_t l_1211 = 0L;
        int32_t l_1212 = 0x28D7945FL;
        int32_t l_1213 = 1L;
        int32_t l_1214 = 0x1F1D9DEAL;
        int32_t l_1215 = 0x4F7CCADFL;
        int32_t ***l_1219[5][3] = {{&g_69,(void*)0,(void*)0},{&g_69,(void*)0,(void*)0},{&g_69,(void*)0,(void*)0},{&g_69,(void*)0,(void*)0},{&g_69,(void*)0,(void*)0}};
        int64_t **l_1222[3];
        int32_t **l_1226 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1222[i] = &l_1157;
        l_1216++;
        (*g_689) = func_42((l_1195 = (g_154 , l_1195)), (safe_div_func_int16_t_s_s(((g_1223[0][0][1] = l_1158) == (void*)0), (safe_mod_func_uint16_t_u_u(1UL, p_27)))), (l_1227 = l_1226), g_63.f0, (*g_303));
        for (g_14 = 0; (g_14 == 26); g_14 = safe_add_func_int64_t_s_s(g_14, 6))
        { 
            int32_t **l_1230 = (void*)0;
            uint64_t **l_1232[4];
            uint16_t *l_1234[3];
            int32_t l_1237 = 0L;
            int i;
            for (i = 0; i < 4; i++)
                l_1232[i] = &g_118;
            for (i = 0; i < 3; i++)
                l_1234[i] = &g_50[0];
            (*g_689) = (void*)0;
            (*g_689) = func_42(l_1230, ((((*g_118) = (+((l_1213 = (p_27 < (&g_989 == (l_1233 = &g_119)))) , (safe_mul_func_int8_t_s_s(p_27, (((*l_1159) = l_1237) < ((safe_mul_func_int8_t_s_s(((*g_118) && 0L), p_27)) >= 0xB33857BDD17CF5C9LL))))))) || (*g_118)) != l_1214), &g_70, l_1211, (*g_303));
        }
    }
    return (*g_689);
}



static struct S0  func_28(union U2 ** const  p_29, int32_t * p_30, uint64_t  p_31)
{ 
    int64_t *l_332 = &g_63.f3;
    int32_t l_333 = 0x7D8292A5L;
    int32_t l_334[4][7] = {{0x7431F6FEL,4L,0x3261207DL,0xFDBCE61AL,0x66CA220BL,0xFDBCE61AL,0x3261207DL},{0x6E9191ECL,0x6E9191ECL,0xFDBCE61AL,(-5L),3L,0x1EB17DAAL,0x7431F6FEL},{(-5L),0x6E9191ECL,1L,0x1EB17DAAL,0x1EB17DAAL,1L,0x6E9191ECL},{1L,4L,0x6E9191ECL,0x3261207DL,3L,(-8L),(-5L)}};
    union U3 ***l_374 = &g_93;
    const int16_t l_394[6] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
    uint32_t *l_395 = &g_109[3];
    struct S0 l_426 = {1L,0L,0x602BL};
    union U2 * const * const l_433 = &g_15;
    int32_t l_481 = 1L;
    int32_t ***l_501 = &g_69;
    union U2 **l_533[6][5] = {{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15,(void*)0,&g_15}};
    uint64_t l_603 = 0x47F49DD7A4A52DA7LL;
    uint8_t *l_630 = &g_187;
    int64_t l_637 = 0x85AFA442C2E2BC56LL;
    uint64_t l_640 = 0xE3DC26E4F9813266LL;
    struct S0 l_657 = {0xE5EB656CL,0x97L,0x029DL};
    int32_t l_680 = 0L;
    const int32_t * const * const l_696 = &g_89[0];
    int32_t l_703 = 0x721F1EB8L;
    int16_t ***l_758[1][2][2];
    int32_t **l_769 = (void*)0;
    union U1 *l_775 = &g_385;
    uint16_t l_776 = 0x22DBL;
    int32_t *l_791 = &l_334[1][2];
    int8_t ** const l_792[1][3][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t l_879 = 0x4F060C75L;
    int8_t l_940 = 0L;
    int32_t l_946 = (-10L);
    uint8_t l_984 = 0x2AL;
    int32_t l_1006 = 0L;
    int16_t l_1039 = 0x70E6L;
    uint64_t l_1046 = 4UL;
    uint8_t l_1076 = 255UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_758[i][j][k] = (void*)0;
        }
    }
    return l_426;
}



static union U2 ** func_32(uint32_t  p_33, const union U2 * p_34, int16_t  p_35, uint64_t  p_36)
{ 
    uint16_t *l_316 = (void*)0;
    uint16_t *l_317 = (void*)0;
    uint16_t *l_318 = (void*)0;
    uint16_t *l_319 = &g_50[0];
    union U2 **l_322 = &g_15;
    (*g_90) |= (safe_lshift_func_uint16_t_u_s(((*l_319) = 0x7024L), g_63.f4));
    for (g_63.f3 = (-26); (g_63.f3 < 15); ++g_63.f3)
    { 
        return l_322;
    }
    return &g_15;
}



static union U2  func_37(int32_t * p_38, int32_t * p_39, union U2 ** p_40, uint8_t  p_41)
{ 
    int64_t l_83 = (-3L);
    uint64_t l_110 = 0xCB43529ADFF6575ELL;
    uint64_t *l_120 = (void*)0;
    union U2 **l_121 = &g_15;
    union U2 **l_124 = &g_15;
    uint8_t l_126 = 0xB5L;
    int32_t l_183[7] = {0L,0L,0L,0L,0L,0L,0L};
    int32_t l_205 = 1L;
    int16_t l_209 = 0xCF5AL;
    uint64_t l_269 = 18446744073709551615UL;
    int32_t ***l_279 = &g_69;
    int32_t ****l_278 = &l_279;
    int i;
lbl_196:
    g_55 = (!(-1L));
    for (g_16.f0 = 0; (g_16.f0 != 18); g_16.f0++)
    { 
        int64_t l_81 = 0xC31937DA8781562ELL;
        uint32_t l_178 = 6UL;
        union U2 **l_195 = &g_15;
        int32_t l_200 = 0x61D6041FL;
        int32_t l_203 = 0x0F04E7F9L;
        int32_t l_206[5] = {0x4F2632C0L,0x4F2632C0L,0x4F2632C0L,0x4F2632C0L,0x4F2632C0L};
        const int32_t *l_215 = (void*)0;
        const int32_t **l_214 = &l_215;
        const int32_t ***l_213 = &l_214;
        uint16_t l_221 = 0x7C04L;
        int64_t l_241 = (-1L);
        int64_t l_243 = (-6L);
        int i;
        for (g_55 = 18; (g_55 <= (-27)); g_55--)
        { 
            uint16_t l_80 = 65535UL;
            union U2 ***l_123[4];
            union U3 ** const *l_125 = &g_93;
            int32_t l_157 = 0xFA4ECE64L;
            int32_t l_207[6][2][7] = {{{0xD265171BL,(-4L),0xD265171BL,8L,0xE6A045B0L,(-1L),8L},{(-1L),(-4L),0x620B5F74L,0xA2EA1165L,0xE6A045B0L,0x36E82543L,0xA2EA1165L}},{{(-1L),0xC423DE85L,0xD265171BL,0xA2EA1165L,(-1L),(-1L),0xA2EA1165L},{0xD265171BL,(-4L),0xD265171BL,8L,0xE6A045B0L,(-1L),8L}},{{(-1L),(-4L),0x620B5F74L,0xA2EA1165L,0xE6A045B0L,0x36E82543L,0xA2EA1165L},{(-1L),0xC423DE85L,0xD265171BL,0xA2EA1165L,(-1L),(-1L),(-1L)}},{{(-1L),0xA123F684L,(-1L),0x36E82543L,0xC423DE85L,7L,0x36E82543L},{(-1L),0xA123F684L,1L,(-1L),0xC423DE85L,(-4L),(-1L)}},{{(-1L),0L,(-1L),(-1L),7L,7L,(-1L)},{(-1L),0xA123F684L,(-1L),0x36E82543L,0xC423DE85L,7L,0x36E82543L}},{{(-1L),0xA123F684L,1L,(-1L),0xC423DE85L,(-4L),(-1L)},{(-1L),0L,(-1L),(-1L),7L,7L,(-1L)}}};
            int8_t *l_237 = (void*)0;
            int32_t l_242[5][3][7] = {{{0xB857439BL,0xB56AE926L,0xB857439BL,0x8E239A32L,0x130F14CAL,0x8E239A32L,0xB857439BL},{0x9C02D81BL,0x9C02D81BL,0x662EA837L,0x9C02D81BL,0x9C02D81BL,0x662EA837L,0x9C02D81BL},{0x130F14CAL,0x8E239A32L,0xB857439BL,0xB56AE926L,0xB857439BL,0x8E239A32L,0x130F14CAL}},{{0x8EF07762L,0x9C02D81BL,0x8EF07762L,0x8EF07762L,0x9C02D81BL,0x8EF07762L,0x8EF07762L},{0x130F14CAL,0xB56AE926L,0xDF74A3EBL,0xB56AE926L,0x130F14CAL,0xAF7D3FE8L,0x130F14CAL},{0x9C02D81BL,0x8EF07762L,0x8EF07762L,0x9C02D81BL,0x8EF07762L,0x8EF07762L,0x9C02D81BL}},{{0xB857439BL,0xB56AE926L,0xB857439BL,0x8E239A32L,0x130F14CAL,0x8E239A32L,0xB857439BL},{0x9C02D81BL,0x9C02D81BL,0x662EA837L,0x9C02D81BL,0x9C02D81BL,0x662EA837L,0x9C02D81BL},{0x130F14CAL,0x8E239A32L,0xB857439BL,0xB56AE926L,0xB857439BL,0x8E239A32L,0x130F14CAL}},{{0x8EF07762L,0x9C02D81BL,0x8EF07762L,0x8EF07762L,0x9C02D81BL,0x8EF07762L,0x8EF07762L},{0x130F14CAL,0xB56AE926L,0xDF74A3EBL,0xB56AE926L,0x130F14CAL,0xAF7D3FE8L,0x130F14CAL},{0x9C02D81BL,0x8EF07762L,0x8EF07762L,0x9C02D81BL,0x8EF07762L,0x8EF07762L,0x9C02D81BL}},{{0xB857439BL,0xB56AE926L,0xB857439BL,0x8E239A32L,0x130F14CAL,0x8E239A32L,0xB857439BL},{0x9C02D81BL,0x9C02D81BL,0x662EA837L,0x9C02D81BL,0x9C02D81BL,0x662EA837L,0x9C02D81BL},{0x130F14CAL,0x8E239A32L,0xB857439BL,0xB56AE926L,0xB857439BL,0x8E239A32L,0x130F14CAL}}};
            uint32_t l_244 = 0xA1879975L;
            int64_t l_301 = 0x15F5AF962FC695F4LL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_123[i] = (void*)0;
            for (p_41 = 0; (p_41 >= 27); p_41++)
            { 
                union U3 *l_62 = &g_63;
                int32_t l_82[7][7] = {{0x0DB5B4C0L,9L,(-1L),(-3L),(-3L),(-1L),9L},{(-1L),0xD78FD71FL,9L,0x0D922041L,0L,0xE9700A5FL,0x0DB5B4C0L},{(-1L),0x92BB7762L,1L,9L,1L,0x92BB7762L,(-1L)},{0x0DB5B4C0L,0xE9700A5FL,0L,0x0D922041L,9L,0xD78FD71FL,(-1L)},{9L,(-1L),(-3L),(-3L),(-1L),9L,0x0DB5B4C0L},{0x92BB7762L,(-3L),0L,0x0DB5B4C0L,0x98C7BE44L,9L,9L},{0x0D922041L,0x92BB7762L,1L,0x92BB7762L,(-3L),0L,0x0DB5B4C0L}};
                uint64_t l_86[4] = {0x9021B0A093F77403LL,0x9021B0A093F77403LL,0x9021B0A093F77403LL,0x9021B0A093F77403LL};
                int32_t **l_87 = &g_70;
                union U3 ***l_95 = &g_93;
                const uint32_t l_107 = 0xD6FFC8DFL;
                uint32_t *l_108 = &g_109[3];
                int i, j;
                for (g_14 = 1; (g_14 >= 0); g_14 -= 1)
                { 
                    union U3 **l_64 = &l_62;
                    int32_t *l_65[2][1][1];
                    uint8_t l_67 = 0xADL;
                    union U2 l_68 = {18446744073709551610UL};
                    uint64_t *l_84 = (void*)0;
                    uint64_t *l_85 = &g_63.f2;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_65[i][j][k] = &g_66[2];
                        }
                    }
                    (*l_64) = l_62;
                    if (g_50[g_14])
                        continue;
                    l_67 |= p_41;
                    (*p_40) = &g_16;
                    g_90 = func_42((l_68 , g_69), (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((*l_85) = ((((((0xC012777FC3FE767ELL && ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(l_80)), 0)) && ((l_82[0][2] ^= ((l_81 && (g_14 >= ((g_66[2] < 0L) < l_81))) <= g_63.f4)) > 0x43C7D870L))) || l_83) , l_81) != g_9) ^ l_83) || 0x37531468L)) == 0xA4C4AE3B72CD76E6LL), p_41)), l_86[2])), l_87, p_41, g_88);
                }
                if (p_41)
                    continue;
                (*g_90) = ((safe_sub_func_uint32_t_u_u((((((*l_95) = ((*g_8) , g_93)) == (void*)0) > (safe_div_func_uint64_t_u_u(((+g_9) < ((0x50D6L > (safe_rshift_func_uint8_t_u_s((!(((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((l_86[0] > (!((*l_108) = (l_107 , g_66[1])))) < l_83), l_110)) >= 65535UL), g_50[0])) <= l_83) <= p_41)), 0))) , g_63.f4)), 1UL))) & 0x4EA18A5AL), g_50[0])) < g_16.f0);
            }
            (*g_90) = ((((((+(safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((((&g_93 != ((safe_lshift_func_uint8_t_u_u(((l_120 = (p_41 , g_118)) == ((l_121 == ((~l_80) , (l_124 = &g_15))) , &g_119)), 7)) , l_125)) | l_83) != (*g_118)) >= 0UL), p_41)), 0xBAL))) > l_83) > g_63.f4) > g_55) == l_81) || l_126);
            if ((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((((void*)0 == p_40) , (safe_lshift_func_int8_t_s_s((g_109[3] <= g_119), g_109[3]))) < 0x1DL), (((safe_sub_func_uint16_t_u_u((l_83 || l_81), p_41)) | g_63.f4) , g_14))), p_41)))
            { 
                int32_t l_180 = 0x68BF4733L;
                union U3 **l_184 = &g_94;
                int32_t **l_197[5] = {&g_70,&g_70,&g_70,&g_70,&g_70};
                int32_t l_201 = 0x9AC91F7FL;
                int32_t l_202 = 0x22122A3DL;
                int32_t l_204 = (-10L);
                int32_t l_208 = (-1L);
                int32_t l_220 = 0xBD5586F3L;
                union U2 l_225 = {0UL};
                int i;
                (*p_40) = &g_16;
                for (l_126 = 0; (l_126 < 38); l_126 = safe_add_func_int64_t_s_s(l_126, 6))
                { 
                    uint64_t l_152 = 0xF6D1638B9B80995ALL;
                    int8_t *l_153 = &g_154;
                    int64_t l_156 = (-10L);
                    union U3 **l_160[6] = {&g_94,&g_94,&g_94,&g_94,&g_94,&g_94};
                    union U3 ***l_161[7][1] = {{(void*)0},{(void*)0},{&l_160[5]},{(void*)0},{(void*)0},{&l_160[5]},{(void*)0}};
                    uint64_t *l_171[1];
                    int8_t l_175 = 9L;
                    int16_t *l_179 = &g_63.f1;
                    uint8_t *l_181 = &g_182;
                    uint8_t *l_185 = (void*)0;
                    uint8_t *l_186 = &g_187;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_171[i] = &l_152;
                    l_157 ^= (safe_sub_func_uint32_t_u_u(((g_63.f4 ^ (*g_118)) < ((safe_add_func_uint8_t_u_u((0x5FL >= (safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(l_110, l_110)), (safe_rshift_func_int8_t_s_s((g_155[0][1][1] = ((*l_153) &= (+(0x31L >= (((safe_mul_func_int8_t_s_s(0x5BL, l_152)) , (void*)0) == &g_119))))), 5))))), l_80)) <= 0xC4584B38L)), l_156));
                    (*g_90) = 8L;
                    l_180 = (safe_sub_func_uint64_t_u_u(((g_50[1] = (((*l_186) = ((g_162 = (g_93 = l_160[5])) == ((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_183[2] = ((1L == ((((safe_mod_func_uint64_t_u_u((g_172 ^= (++(*g_118))), g_155[1][0][0])) == (!l_157)) <= ((*l_181) &= (+(((l_175 | ((*l_153) &= p_41)) <= ((safe_mod_func_int32_t_s_s((((*l_179) = (l_178 && 7L)) <= l_175), 4294967289UL)) < l_180)) >= 0xA48A8D7FAAE3D9D2LL)))) , 1L)) > g_16.f0)), p_41)), p_41)) , l_184))) < l_180)) && 0x8DACL), p_41));
                    l_183[2] = ((p_41 < (l_178 == (safe_mul_func_uint16_t_u_u(l_81, ((((*g_90) = ((((~l_157) , ((*g_118) = p_41)) != 0xBFD9C85C1886F3FELL) == ((safe_lshift_func_int8_t_s_u((l_195 != p_40), 0)) > (*g_8)))) > l_180) < p_41))))) && l_180);
                }
                if (g_182)
                    goto lbl_196;
                if ((l_197[1] != &g_89[0]))
                { 
                    int32_t *l_198 = &l_180;
                    int32_t *l_199[3][2][1] = {{{&g_9},{(void*)0}},{{&g_9},{&g_9}},{{(void*)0},{&g_9}}};
                    uint8_t l_210[1];
                    const int32_t ****l_216 = &l_213;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_210[i] = 0x34L;
                    ++l_210[0];
                    (*l_216) = l_213;
                    if (g_154)
                        goto lbl_196;
                }
                else
                { 
                    int32_t *l_217 = &l_201;
                    int32_t *l_218 = &l_206[3];
                    int32_t *l_219[6] = {&g_66[0],&l_206[0],&l_206[0],&g_66[0],&l_206[0],&l_206[0]};
                    union U3 *l_224[4][2][6] = {{{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63}},{{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63}},{{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63}},{{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63}}};
                    int i, j, k;
                    l_221++;
                    (**l_125) = l_224[3][0][3];
                    return l_225;
                }
            }
            else
            { 
                int32_t l_226 = 0L;
                int8_t *l_227 = &g_63.f0;
                int8_t **l_228 = &l_227;
                uint8_t *l_231 = &g_187;
                int64_t *l_232 = &g_63.f3;
                uint32_t *l_233 = &g_109[0];
                uint32_t *l_234 = &g_235;
                union U3 ***l_236 = (void*)0;
                int16_t l_238 = 1L;
                int32_t *l_239 = (void*)0;
                int32_t *l_240[3][6][3] = {{{(void*)0,&l_200,&l_207[0][1][6]},{(void*)0,&l_207[0][1][6],&l_207[0][1][6]},{(void*)0,&l_207[5][0][6],&l_206[3]},{(void*)0,&l_207[5][0][6],&g_66[2]},{(void*)0,&l_207[0][1][6],&l_206[3]},{(void*)0,&l_200,&l_207[0][1][6]}},{{(void*)0,&l_207[0][1][6],&l_207[0][1][6]},{(void*)0,&l_207[5][0][6],&l_206[3]},{(void*)0,&l_207[5][0][6],&g_66[2]},{(void*)0,&l_207[0][1][6],&l_206[3]},{(void*)0,&l_200,&l_207[0][1][6]},{(void*)0,&l_207[0][1][6],&l_207[0][1][6]}},{{(void*)0,&l_207[5][0][6],&l_206[3]},{(void*)0,&l_207[5][0][6],&g_66[2]},{(void*)0,&l_207[0][1][6],&l_206[3]},{(void*)0,&l_200,&l_207[0][1][6]},{(void*)0,&l_207[0][1][6],&l_207[0][1][6]},{(void*)0,&l_207[5][0][6],&l_206[3]}}};
                int i, j, k;
                if (l_226)
                    break;
                if (((((0xC351D04491F7684ELL >= (((((((0UL & (p_41 , ((((*l_228) = l_227) != (((((((((*l_234) |= ((*l_233) = (((*l_232) = (safe_lshift_func_int16_t_s_s((((p_41 ^ ((*l_231) = (p_41 && (&g_154 == (void*)0)))) != p_41) & (*g_118)), l_226))) || g_9))) , l_125) == l_236) , (*g_118)) & l_200) != (*g_90)) > l_80) , l_237)) ^ l_238))) >= l_207[1][0][3]) >= l_238) , 0xF56DL) , (void*)0) == l_231) != 0x90C3L)) , &p_41) != &p_41) >= l_110))
                { 
                    g_172 ^= ((*g_90) = (*g_8));
                }
                else
                { 
                    (*g_90) = (*g_8);
                }
                l_244++;
                (*g_90) ^= (safe_div_func_int8_t_s_s(l_83, 9UL));
                return (*g_15);
            }
            for (l_209 = 0; l_209 < 5; l_209 += 1)
            {
                for (l_243 = 0; l_243 < 3; l_243 += 1)
                {
                    for (l_178 = 0; l_178 < 7; l_178 += 1)
                    {
                        l_242[l_209][l_243][l_178] = 0xBCACBB11L;
                    }
                }
            }
            for (l_126 = 0; (l_126 < 13); l_126++)
            { 
                int8_t l_251 = 7L;
                int32_t *l_252 = &g_66[2];
                int32_t *l_253 = (void*)0;
                int8_t l_254 = 0L;
                int32_t *l_255 = &l_183[2];
                int32_t *l_256 = &l_242[1][2][5];
                int32_t l_257 = (-8L);
                int32_t *l_258 = &l_200;
                int32_t *l_259 = &l_157;
                int32_t *l_260 = (void*)0;
                int32_t *l_261 = &l_207[0][1][4];
                int32_t *l_262 = (void*)0;
                int32_t *l_263 = &l_200;
                int32_t *l_264 = &l_242[1][2][5];
                int32_t *l_265 = &l_207[4][1][4];
                int32_t *l_266 = &l_206[3];
                int32_t *l_267 = &l_200;
                int32_t *l_268[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_268[i][j] = (void*)0;
                }
                ++l_269;
                if ((*g_8))
                    break;
                for (g_235 = 0; (g_235 <= 1); g_235 += 1)
                { 
                    int32_t *****l_280 = &l_278;
                    int32_t l_291 = 0x97E585A9L;
                    (*l_266) = (safe_add_func_int64_t_s_s(((0L <= 0xE339L) , ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_41, (((*l_280) = l_278) == (void*)0))), (((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(l_209, ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((**l_279) != p_38), l_291)), 0x69L)) , p_41))), g_292[5][0])) < 246UL), l_183[2])) || l_242[4][2][0]) < l_241))) , g_292[5][0])), (*g_118)));
                    if (l_80)
                        goto lbl_196;
                }
                (*l_261) ^= ((safe_lshift_func_int8_t_s_u(g_292[5][0], 0)) || (safe_sub_func_int8_t_s_s(0L, (safe_div_func_uint64_t_u_u(((65535UL ^ l_301) < ((void*)0 != g_302[0][0][0])), (safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((4L < l_206[4]), 4)) || 0x539BL), g_50[0])) ^ g_187), l_157)))))));
                return (*g_15);
            }
        }
    }
    return (**l_121);
}



static int32_t * func_42(int32_t ** p_43, uint16_t  p_44, int32_t ** p_45, uint16_t  p_46, const int32_t * const * const  p_47)
{ 
    return &g_14;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_50[i], "g_50[i]", print_hash_value);

    }
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f4, "g_63.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_109[i], "g_109[i]", print_hash_value);

    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_155[i][j][k], "g_155[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_292[i][j], "g_292[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_313[i][j].f0, "g_313[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_385.f0, "g_385.f0", print_hash_value);
    transparent_crc(g_385.f2, "g_385.f2", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_675[i][j][k], "g_675[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_726[i].f0, "g_726[i].f0", print_hash_value);
        transparent_crc(g_726[i].f1, "g_726[i].f1", print_hash_value);
        transparent_crc(g_726[i].f2, "g_726[i].f2", print_hash_value);

    }
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_830.f0, "g_830.f0", print_hash_value);
    transparent_crc(g_830.f4, "g_830.f4", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1124[i][j][k], "g_1124[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1199, "g_1199", print_hash_value);
    transparent_crc(g_1393, "g_1393", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1433[i], "g_1433[i]", print_hash_value);

    }
    transparent_crc(g_1504, "g_1504", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1599[i][j], "g_1599[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1632, "g_1632", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
